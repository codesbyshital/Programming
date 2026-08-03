import pandas as pd                 # Series(1D array) , Dataframe(2D array) & Panel(3D array : removed now)

Border = "-"*30

###########################################################################################################
# Step 1 : Load the dataset
###########################################################################################################

print(Border)
print("Step 1 : Load the dataset")
print(Border)

DataPath = "iris.csv"                   #currrent directory

df = pd.read_csv(DataPath)          # Dataframe  (2D array)

print("Dataset loaded successfully..")
print("Initial Entries from dataset are :")
print(df.head())

