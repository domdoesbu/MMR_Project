import pandas as pd
import matplotlib.pyplot as plt
import re
import numpy as np
import sklearn

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

df = pd.read_csv("evaluation_results_142.csv")

df['class'] = df['query'].apply(lambda x: re.search(r'./ResampledDatabase[/\\]([^/\\]+)', x).group(1))

k_max = 6

avg_acc = [[]] * k_max
avg_prec = [[]] * k_max
avg_rec = [[]] * k_max

total_acc = [None] * k_max
total_prec = [None] * k_max
total_rec = [None] * k_max
labels = []
for i in range(len(df)):
    labels.append(re.search(r'./ResampledDatabase[/\\]([^/\\]+)', df.iloc[i][0]).group(1))

for k in range(k_max):
    predictions = [[]] * len(df)
    for i in range(len(df)):
        current_pred = []
        for j in range(k+1):
            current_pred.append(re.search(r'./ResampledDatabase[/\\]([^/\\]+)', df.iloc[i][j+5]).group(1))
        predictions[i] = current_pred

    class_names = np.unique(labels)

    avg_acc[k], avg_prec[k], avg_rec[k], total_acc[k], total_prec[k], total_rec[k] = get_prec_rec(labels, predictions)
    
    

df_out = pd.DataFrame({
    'class' : [],
    'k' : [],
    'accuracy' : [],
    'precision' : [],
    'recall' : []
})

classes = []
ks = []
accuracies = []
precisions = []
recalls = []
for i in range(k_max):
    for j in range(len(class_names)):
        classes.append(class_names[j])
        ks.append(i+1)
        accuracies.append(avg_acc[i][j])
        precisions.append(avg_prec[i][j])
        recalls.append(avg_rec[i][j])

df_out['class'] = classes
df_out['k'] = ks
df_out['accuracy'] = accuracies
df_out['precision'] = precisions
df_out['recall'] = recalls

df_out.to_csv('metrics_142.csv', ',')

