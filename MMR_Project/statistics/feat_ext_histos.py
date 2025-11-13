import csv
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import os

def fix_csv(csv_path):

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

    return rows, header

features_original_csv = "feature_extraction_complete.csv"

rows, _ = fix_csv(features_original_csv)

areas = [None] * len(rows)
vols =  [None] * len(rows)
comps = [None] * len(rows)
rects = [None] * len(rows)
diams = [None] * len(rows)
convs = [None] * len(rows)
eccens = [None] * len(rows)

for i in range(len(rows)):
    areas[i] = float(rows[i][2])
    vols[i] = float(rows[i][3])
    comps[i] = float(rows[i][4])
    rects[i] = float(rows[i][5])
    diams[i] = float(rows[i][6])
    convs[i] = float(rows[i][7])
    eccens[i] = float(rows[i][8])

bins_area = np.linspace(0, max(areas))
bins_vol = np.linspace(0, max(vols))
bins_comp = np.linspace(0, 10000000)
bins_rect = np.linspace(0, max(rects))
bins_diam = np.linspace(0, max(diams))
bins_conv = np.linspace(0, max(convs))
bins_eccen = np.linspace(0, max(eccens))

fig = plt.figure(figsize=(8,8))
plt.xlabel('Area Value')
plt.ylabel('Shape Count')
plt.hist(areas, bins_area)
plt.show()

fig = plt.figure(figsize=(8,8))
plt.xlabel('Volume Value')
plt.ylabel('Shape Count')
plt.hist(vols, bins_vol)
plt.show()

avg_comps = sum(comps) / len(comps)
print(avg_comps)

fig = plt.figure(figsize=(8,8))
plt.xlabel('Compactness Value')
plt.ylabel('Shape Count')
plt.hist(comps, bins_comp)
plt.axvline(x=avg_comps, color='red', label='Average Compactness')
plt.show()

fig = plt.figure(figsize=(8,8))
plt.xlabel('Rectangularity Value')
plt.ylabel('Shape Count')
plt.hist(rects, bins_rect)
plt.show()

fig = plt.figure(figsize=(8,8))
plt.xlabel('Diameter Value')
plt.ylabel('Shape Count')
plt.hist(diams, bins_diam)
plt.show()

fig = plt.figure(figsize=(8,8))
plt.xlabel('Convexity Value')
plt.ylabel('Shape Count')
plt.hist(convs, bins_conv)
plt.show()

fig = plt.figure(figsize=(8,8))
plt.xlabel('Eccentricity Value')
plt.ylabel('Shape Count')
plt.hist(eccens, bins_eccen)
plt.show()
    
print('-' * 16)

print('Area')
print('Min: ' + str(min(areas)))
print('Max: ' + str(max(areas)))


print('-' * 16)

print('Volume')
print('Min: ' + str(min(vols)))
print('Max: ' + str(max(vols)))

print('-' * 16)

print('Compactness')
print('Min: ' + str(min(comps)))
print('Max: ' + str(max(comps)))


print('-' * 16)

print('Rectangularity')
print('Min: ' + str(min(rects)))
print('Max: ' + str(max(rects)))


print('-' * 16)

print('Diameter')
print('Min: ' + str(min(diams)))
print('Max: ' + str(max(diams)))


print('-' * 16)

print('Convexity')
print('Min: ' + str(min(convs)))
print('Max: ' + str(max(convs)))


print('-' * 16)

print('Eccentricity')
print('Min: ' + str(min(eccens)))
print('Max: ' + str(max(eccens)))


outl_comp = []
for comp in comps:
    if comp < 1:
        outl_comp.append(comp)


print('comps: ' + str(len(comps)))
print('outliers: ' + str(len(outl_comp)))
