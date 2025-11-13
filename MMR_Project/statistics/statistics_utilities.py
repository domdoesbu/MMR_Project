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

def plot_resampling_diff(orig_shapes, resamp_shapes):

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

def zoomIn(resamp_shapes):
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

def plot_normalization_diff(resamp_shapes, norm_shapes):
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

def get_prec_rec(labels, predictions):
    class_names = np.unique(labels)

    TP_class = [[]] * len(class_names)
    FP_class = [[]] * len(class_names)
    FN_class = [[]] * len(class_names)
    TN_class = [[]] * len(class_names)

    class_labels = [[]] * len(class_names)
    class_predictions =  [[[]]] * len(class_names)

    class_sep = 0
    for j in range(len(class_names)):
        current_class_labels = []
        current_class_predictions = []
        for i in range(class_sep, len(labels)):
            if labels[i] == class_names[j]: 
                current_class_labels.append(labels[i])
                current_class_predictions.append(predictions[i])
        class_sep = len(current_class_labels)
        class_labels[j] = current_class_labels
        class_predictions[j] = current_class_predictions

    for i in range(len(class_names)):
        TP_curr_class = []
        FP_curr_class = []
        for j in range(len(class_labels[i])):
            TP_query = 0
            FP_query = 0
            for k in range(len(class_predictions[i][j])):
                if(class_labels[i][j] == class_predictions[i][j][k]):
                    TP_query += 1
                else:
                    FP_query +=1
            TP_curr_class.append(TP_query)
            FP_curr_class.append(FP_query)
        TP_class[i] = TP_curr_class
        FP_class[i] = FP_curr_class


    # FN = total_A - TP;
    # TN = (databaseSize - total_A) - FP;
    for i in range(len(class_names)):
        FN_curr_class = []
        TN_curr_class = []
        for j in range(len(class_labels[i])):
            FN_curr_class.append(len(class_labels[i]) - TP_class[i][j])
            TN_curr_class.append((len(labels) - len(class_labels[i])) - FP_class[i][j])
        FN_class[i] = FN_curr_class
        TN_class[i] = TN_curr_class


    precision_class = [[]] * len(class_labels)
    recall_class = [[]] * len(class_labels)
    accuracy_class = [[]] * len(class_labels)

    # float accuracy = (float)(TP + TN) / (float)databaseSize;
    # float precision = (TP + FP) > 0 ? (float)TP / (TP + FP) : 0.0f;
    # float recall = (TP + FN) > 0 ? (float)TP / (TP + FN) : 0.0f;
    # float f1 = (precision + recall) > 0 ? 2.0f * (precision * recall) / (precision + recall) : 0.0f;
    for i in range(len(class_names)):
        prec_curr_class = []
        acc_curr_class = []
        rec_curr_class = []
        for j in range(len(class_labels[i])):
            prec = float(TP_class[i][j] / (TP_class[i][j] + FP_class[i][j])) if TP_class[i][j] + FP_class[i][j] > 0 else 0.0 
            prec_curr_class.append(prec)
            rec = float(TP_class[i][j] / (TP_class[i][j] + FN_class[i][j])) if TP_class[i][j] + FP_class[i][j] > 0 else 0.0
            rec_curr_class.append(rec)
            acc = float(TP_class[i][j] + TN_class[i][j]) / float(len(labels))
            acc_curr_class.append(acc)
        precision_class[i] = prec_curr_class
        recall_class[i] = rec_curr_class
        accuracy_class[i] = acc_curr_class


    # totalAccuracy += accuracy;
    # totalPrecision += precision;
    # totalRecall += recall;

    avg_prec = [None] * len(class_names)
    avg_rec = [None] * len(class_names)
    avg_acc = [None] * len(class_names)
    for i in range(len(class_names)):
        avg_prec[i] = sum(precision_class[i]) / len(precision_class[i])
        avg_rec[i] = sum(recall_class[i]) / len(recall_class[i])
        avg_acc[i] = sum(accuracy_class[i]) / len(accuracy_class[i])

    total_accuracy = sum(avg_acc) / len(class_names)
    total_precision = sum(avg_prec) / len(class_names)
    total_recall = sum(avg_rec) / len(class_names)
    
    return avg_acc, avg_prec, avg_rec, total_accuracy, total_precision, total_recall

def feature_extraction_histos():
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
    bins_comp = np.linspace(0, max(comps))
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

    fig = plt.figure(figsize=(8,8))
    plt.xlabel('Compactness Value')
    plt.ylabel('Shape Count')
    plt.hist(comps, bins_comp)
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
