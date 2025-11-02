import pandas as pd
import matplotlib.pyplot as plt
import re

df = pd.read_csv("evaluation_results.csv")

df['class'] = df['query'].apply(lambda x: re.search(r'ResampledDatabase[/\\]([^/\\]+)', x).group(1))


class_stats = df.groupby('class')[['accuracy', 'recall']].mean().reset_index()

classes = df['class'].unique()

# for c in classes:
#     subset = df[df['class'] == c]

#     plt.figure(figsize=(6, 5))
#     plt.scatter(subset['recall'], subset['precision'], alpha=0.7)
#     plt.title(f'Precision–Recall Plot for {c}')
#     plt.xlabel('Recall')
#     plt.ylabel('Precision')
#     plt.xlim(0, 1)
#     plt.ylim(0, 1)
#     plt.grid(True)
#     plt.tight_layout()
#     plt.plot(subset['recall'], subset['precision'])
#     plt.savefig(fname=c)

plt.figure(figsize=(8, 6))

for c in classes:
    subset = df[df['class'] == c]
    plt.scatter(subset['recall'], subset['precision'], label=c, alpha=0.7)
    plt.plot(subset['recall'], subset['precision'])

plt.title('Precision–Recall Plot (All Classes)')
plt.xlabel('Recall')
plt.ylabel('Precision')
plt.xlim(0, 1)
plt.ylim(0, 1)
plt.legend(title='Class')
plt.grid(True)
plt.tight_layout()
#plt.savefig(fname='Precision_Recall_All')
plt.show()