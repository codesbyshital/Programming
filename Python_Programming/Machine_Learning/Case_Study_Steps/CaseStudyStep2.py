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

###########################################################################################################
# Step 2 :  Exploratory Data Analysis (EDA)
###########################################################################################################

print(Border)
print("Step 2 : Exploratory Data Analysis (EDA)")
print(Border)

print("Shape of Dataset : ",df.shape)
print("Column names : ",list(df.columns))           # typecast to list

print("Missing Values per column : ")
print(df.isnull().sum())            #canonical function call

print("Class Distribution(Species count) : ")
print(df["species"].value_counts())              # counts the labels as per species/clasifications

print("Statistical report of dataset : ")
print(df.describe())