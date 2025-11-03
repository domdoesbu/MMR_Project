import pandas as pd
import matplotlib.pyplot as plt
import re
import numpy as np
import sklearn

df = pd.read_csv("MMR_Project/evaluation_results.csv")

df['class'] = df['query'].apply(lambda x: re.search(r'ResampledDatabase[/\\]([^/\\]+)', x).group(1))

labels = []
predictions = []

for i in range(len(df)):
    for j in range(6):
        labels.append(re.search(r'ResampledDatabase[/\\]([^/\\]+)', df.iloc[i][0]).group(1))
        predictions.append(re.search(r'ResampledDatabase[/\\]([^/\\]+)', df.iloc[i][j+5]).group(1))


# for (auto& label : labels) {
#     std::string returnedClass = fs::path(label).parent_path().filename().string();
#     if (returnedClass == className) {
#         TP++;
#     }
#     else {
#         FP++;
#     }
# }
class_names = np.unique(labels)

TP_class = [0] * len(class_names)
FP_class = [0] * len(class_names)
FN_class = [0] * len(class_names)
TN_class = [0] * len(class_names)

class_labels = [[]] * len(class_names)
class_predictions =  [[]] * len(class_names)

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


class_counts = []

for i in range(len(class_names)):
    for j in range(len(class_labels[i])):
        if(class_labels[i][j] == class_predictions[i][j]):
            TP_class[i] += 1
        else:
            FP_class[i] +=1

# FN = total_A - TP;
# TN = (databaseSize - total_A) - FP;
for i in range(len(class_names)):
    FN_class[i] = len(class_labels[i]) - TP_class[i]
    TN_class[i] = (len(labels) - len(class_labels[i])) - FP_class[i] 

precision_class = []
recall_class = []
accuracy_class = []

# float accuracy = (float)(TP + TN) / (float)databaseSize;
# float precision = (TP + FP) > 0 ? (float)TP / (TP + FP) : 0.0f;
# float recall = (TP + FN) > 0 ? (float)TP / (TP + FN) : 0.0f;
# float f1 = (precision + recall) > 0 ? 2.0f * (precision * recall) / (precision + recall) : 0.0f;
for i in range(len(class_names)):
    prec = float(TP_class[i] / (TP_class[i] + FP_class[i])) if TP_class[i] + FP_class[i] > 0 else 0.0 
    precision_class.append(prec)
    rec = float(TP_class[i] / (TP_class[i] + FN_class[i])) if TP_class[i] + FP_class[i] > 0 else 0.0
    recall_class.append(rec)
    acc = float(TP_class[i] + TN_class[i]) / float(len(labels)) # is len(labels) same as db size?
    accuracy_class.append(acc)

# totalAccuracy += accuracy;
# totalPrecision += precision;
# totalRecall += recall;
total_accuracy = sum(accuracy_class) / len(class_names)
total_precision = sum(precision_class) / len(class_names)
total_recall = sum(recall_class) / len(class_names)

pass