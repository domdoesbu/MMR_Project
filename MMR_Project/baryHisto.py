import pandas as pd
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# ---- Step 1: Read CSV files ----
df1 = pd.read_csv("Bary_Eigs_AfterNorm.csv")
df2 = pd.read_csv("Bary_Eigs.csv")

# ---- Step 2: Extract barycentric coordinates ----
x1, y1, z1 = df1["BaryX"], df1["BaryY"], df1["BaryZ"]
x2, y2, z2 = df2["BaryX"], df2["BaryY"], df2["BaryZ"]

# ---- Step 3: Create figure with 2 subplots side by side ----
fig = plt.figure(figsize=(16, 7))

# First 3D scatter plot
# ax1 = fig.add_subplot(122, projection="3d")
# ax1.scatter(x1, y1, z1, color="dodgerblue", alpha=0.7, s=40)
# ax1.set_xlabel("BaryX")
# ax1.set_ylabel("BaryY")
# ax1.set_zlabel("BaryZ")
# ax1.set_title("After Normalization")

# Second 3D scatter plot
ax2 = fig.add_subplot(121, projection="3d")
ax2.scatter(x2, y2, z2, color="orange", alpha=0.7, s=40)
ax2.set_xlabel("BaryX")
ax2.set_ylabel("BaryY")
ax2.set_zlabel("BaryZ")
ax2.set_title("Original")

plt.show()
