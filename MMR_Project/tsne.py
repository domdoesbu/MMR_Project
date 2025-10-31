import csv
import pandas as pd
import numpy as np
from sklearn.manifold import TSNE
import matplotlib.pyplot as plt
import os

csv_path = "feature_extraction_complete_normalized.csv"

rows = []
max_len = 0
with open(csv_path, newline='', encoding='utf-8') as f:
    reader = csv.reader(f, delimiter=',', quotechar='"')
    header = next(reader)
    for r in reader:
        max_len = max(max_len, len(r))
        rows.append(r)

for i, r in enumerate(rows):
    if len(r) < max_len:
        r += [''] * (max_len - len(r))
    elif len(r) > max_len:
        r = r[:max_len]
        rows[i] = r

if len(header) < max_len:
    extra_cols = [f"Extra_{i}" for i in range(max_len - len(header))]
    header += extra_cols

df = pd.DataFrame(rows, columns=header)

class_names = df.iloc[:, 0].astype(str).str.strip().replace('"','')
file_names = df.iloc[:, 1].astype(str).str.strip()
features = df.iloc[:, 2:].apply(pd.to_numeric, errors='coerce').fillna(0)


class_names = class_names.apply(lambda x: os.path.basename(x))

tsne = TSNE(n_components=2, perplexity=30, learning_rate='auto', init='pca', random_state=42)
embeddings = tsne.fit_transform(features)

plt.figure(figsize=(10, 8))
unique_classes = np.unique(class_names)
colors = plt.cm.get_cmap('tab20', len(unique_classes))

for i, cls in enumerate(unique_classes):
    mask = (class_names.values == cls)
    plt.scatter(embeddings[mask, 0], embeddings[mask, 1], label=cls, s=30, alpha=0.7, color=colors(i))

plt.title("t-SNE Projection of Shape Features")
plt.show()
