import csv
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import os

orig_shapes_csv = "shape_analysis.csv"
resampled_shapes_csv = "shape_analysis_resamp.csv"
normalized_shapes_csv = "shape_analysis_resamp_norm.csv"

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

class ShapeInfo :
    def __init__(self, className, fileName, vertexNum, faceNum, faceType, minX, minY, minZ, maxX, maxY, maxZ):
        self.className = className
        self.fileName = fileName
        self.vertexNum = vertexNum
        self.faceNum = faceNum
        self.faceType = faceType
        self.minX = minX
        self.minY = minY
        self.minZ = minZ
        self.maxX = maxX
        self.maxY = maxY
        self.maxZ = maxZ

def get_shape_info(df):
    shape_info_vec = []
    for row in df.iloc:
        shape_info_vec.append(ShapeInfo(row[0], row[1], int(row[2]), int(row[3]), row[4], float(row[5]), float(row[6]), float(row[7]), float(row[8]), float(row[9]), float(row[10])))
    return shape_info_vec

def plot_resampling_diff():

    vert_counts_orig = [] 
    vert_counts_resamp = []
    
    for shape in orig_shapes:
        vert_counts_orig.append(shape.faceNum)
    for shape in resamp_shapes:
        vert_counts_resamp.append(shape.faceNum)

    max_orig =max(vert_counts_orig)
    bins_orig = np.linspace(0, max_orig, num=20)
    max_resamp = max(vert_counts_resamp)
    bins_resamp = np.linspace(0, max_resamp, num=20)

    fig, (ax1, ax2) = plt.subplots(1, 2)
    fig.set_figheight(8)
    fig.set_figwidth(16)
    fig.suptitle('Number of faces')
    ax1.hist(vert_counts_orig,bins_orig)
    ax2.hist(vert_counts_resamp,bins_resamp)

    
    ax1.set_title('Before Resampling')
    ax1.set_xlabel('Number of faces')
    ax1.set_ylabel('Count')

    ax2.set_title('After Resampling')
    ax2.set_xlabel('Number of faces')
    ax2.set_ylabel('Count')



    plt.show()

def zoomIn():
    vert_counts_resamp = [] 

    for shape in resamp_shapes:
        vert_counts_resamp.append(shape.vertexNum)


    max_resamp = 20000
    bins_resamp = np.linspace(0, max_resamp, num=20)

    plt.title("Zoomed-In Histogram of Vertex Count After Resampling")
    plt.xlabel("Number of vertices")
    plt.ylabel("Count")
    plt.xlim(0, max_resamp)
    plt.hist(vert_counts_resamp,bins_resamp)
    plt.show()

def euDist3d(p1:list, p2:list) -> float:
    dist = 0.0
    for i in range(3):
        dist += pow(p1[i] - p2[i], 2)
    return np.sqrt(dist)

def getMaxEdgeLen(shape: ShapeInfo):
    p1 = [shape.maxX, shape.maxY, shape.minZ]
    p2 = [shape.minX, shape.maxY, shape.minZ]
    p3 = [shape.maxX, shape.minY, shape.minZ]
    p4 = [shape.maxX, shape.maxY, shape.maxZ]

    lengths = [euDist3d(p1, p2), euDist3d(p1, p3), euDist3d(p1, p4)]
    return max(lengths)

def plot_normalization_diff():
    max_edge_len_resamp = []
    max_edge_len_norm = []
    for i in range(len(resamp_shapes)):
        max_edge_len_resamp.append(getMaxEdgeLen(resamp_shapes[i]))
        max_edge_len_norm.append(getMaxEdgeLen(norm_shapes[i]))
    
    bins_resamp = np.linspace(0, 15, num=20)
    max_norm = max(max_edge_len_norm)
    bins_norm = np.linspace(0, max_norm, num=20)

    fig, (ax1, ax2) = plt.subplots(1, 2)
    fig.set_figheight(8)
    fig.set_figwidth(16)
    
    fig.suptitle('Max edge length of axis aligned bounding box')
    ax1.hist(max_edge_len_resamp, bins_resamp)

    ax2.hist(max_edge_len_norm, bins_norm)


    ax1.set_title('Before Normalization')
    ax1.set_xlabel('Max Edge Length')
    ax1.set_ylabel('Count')

    ax2.set_title('After Normalization')
    ax2.set_xlabel('Max Edge Length')
    ax2.set_ylabel('Count')

    plt.show()
        


originalShapes = []
resampledShapes = []
normalizedShapes = []

orig_rows, orig_header = fix_csv(orig_shapes_csv)
resamp_rows, resamp_header = fix_csv(resampled_shapes_csv)
norm_rows, norm_header = fix_csv(normalized_shapes_csv)

orig_df = pd.DataFrame(orig_rows, columns=orig_header)
resamp_df = pd.DataFrame(resamp_rows, columns=resamp_header)
norm_shapes = pd.DataFrame(norm_rows, columns=norm_header)

class_names = orig_df.iloc[:,0]

orig_shapes = get_shape_info(orig_df)
resamp_shapes = get_shape_info(resamp_df)
norm_shapes = get_shape_info(norm_shapes)

plot_resampling_diff()
