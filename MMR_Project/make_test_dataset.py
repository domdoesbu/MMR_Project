import pandas as pd
import matplotlib.pyplot as plt
import os
import shutil
import numpy as np

class_list = os.listdir('.\DatabaseOriginal')

classes = [[]] * len(class_list)

for i in range(len(class_list)):
    classes[i] = os.listdir('.\DatabaseOriginal\\' + class_list[i])

os.rmdir('.\\test_DB')
os.mkdir('.\\test_DB')

for class_name in class_list:
    os.mkdir('.\\test_DB\\' + class_name)

new_db_distribution = [None] * len(class_list)

total_db_size = 0

for cl in classes:
    total_db_size += len(cl)

test_db_size = 500

for i in range(len(class_list)):
    new_db_distribution[i] = int((len(classes[i]) * test_db_size) / total_db_size)

for i in range(len(classes)):
    for j in range(new_db_distribution[i]):
        shutil.copy('.\DatabaseOriginal\\' + class_list[i] + '\\' + classes[i][j], '.\\test_DB\\' + class_list[i] )
 
pass