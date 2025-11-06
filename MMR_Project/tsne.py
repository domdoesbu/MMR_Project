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

tsne = TSNE(n_components=2, perplexity=40, learning_rate='auto', init='pca', random_state=42)
embeddings = tsne.fit_transform(features)

plt.figure(figsize=(10, 8))
unique_classes = np.unique(class_names)
colors = plt.cm.get_cmap('tab20', len(unique_classes))
input_class = "Bicycle"
# for i, cls in enumerate(unique_classes):
#     mask = (class_names.values == cls)
    
#     # If this is the input class → red; otherwise → gray
#     color = 'red' if cls == input_class else 'gray'
    
#     plt.scatter(
#         embeddings[mask, 0],
#         embeddings[mask, 1],
#         label=cls,
#         s=30,
#         alpha=0.7,
#         color=color
#     )

for i, cls in enumerate(unique_classes):
    mask = (class_names.values == cls)
    
    if cls in ["AquaticAnimal", "Fish", "Humanoid"]:
        color = 'red'
    elif cls in ["Bicycle", "Motorcycle", "Wheel"]:
        color = 'blue'
    elif cls in ["Bird", "Jet", "Monoplane", "Starship", "Rocket", "Helicopter", "Biplane"]:
        color = 'green'
    elif cls in ["BuildingNonResidential", "House", "Skyscraper", "Apartment"]:
        color = 'orange'
    elif cls in ["Bus", "MilitaryVehicle", "Car", "Truck", "TruckNonContainer", "Train", "Ship"]:
        color = 'yellow'
    elif cls in ["Cellphone", "ComputerKeyboard", "Door", "Monitor", "PianoBoard", "Bed"]:
        color = 'purple'
    elif cls in ["Chess", "City", "Insect", "Quadruped", "DeskPhone"]:
        color = 'pink'
    elif cls in ["ClassicPiano", "RectangleTable", "RoundTable"]:
        color = 'brown'
    elif cls in ["Computer", "MultiSeat", "Bookset", "Shelf", "NonWheelChair", "WheelChair"]:
        color = 'lime'
    elif cls in ["Cup", "Mug", "Vase", "Bottle"]:
        color = 'cyan'
    elif cls in ["DeskLamp", "Glasses", "FloorLamp"]:
        color = 'gray'
    elif cls in ["Guitar", "Musical_Instrument", "Violin", "Drum"]:
        color = 'olive'
    elif cls in ["Hat", "HumanHead", "AircraftBuoyant", "Hand"]:
        color = 'lightseagreen'
    elif cls in ["PlantIndoors", "PlantWildNonTree", "Tree"]:
        color = 'skyblue'
    elif cls in ["Spoon", "Tool", "Sign", "Knife", "Sword", "Gun", "SubmachineGun"]:
        color = 'hotpink'
    else:
        color = 'black'
    
    plt.scatter(embeddings[mask, 0], embeddings[mask, 1], label=cls, s=30, alpha=0.7, color=color)

# Get handles and labels
handles, labels = plt.gca().get_legend_handles_labels()

# Extract colors from the handles
colors = [h.get_facecolor()[0] for h in handles]

# Sort legend items by color name (or RGB value)
sorted_items = sorted(zip(colors, handles, labels), key=lambda x: str(x[0]))

# Unpack sorted items
_, handles_sorted, labels_sorted = zip(*sorted_items)

plt.title("t-SNE Projection of Shape Features")
plt.legend(handles_sorted, labels_sorted, bbox_to_anchor=(1.2, 1), loc=1, fontsize='small', labelspacing=0.1)
plt.show()