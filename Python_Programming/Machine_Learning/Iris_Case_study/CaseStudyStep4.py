import pandas as pd                 # Series(1D array) , Dataframe(2D array) & Panel(3D array : removed now)

# for visualisation
import matplotlib.pyplot as plt
import seaborn as sns

Border = "-"*70

################################################################################################
# Step 1 : Load the dataset
################################################################################################

print(Border)
print("Step 1 : Load the dataset")
print(Border)

DataPath = "iris.csv"                   #currrent directory

df = pd.read_csv(DataPath)          # Dataframe  (2D array)

print("Dataset loaded successfully..")
print("Initial Entries from dataset are :")
print(df.head())

################################################################################################
# Step 2 :  Exploratory Data Analysis (EDA)
################################################################################################

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

##################################################################################################
# Step 3 :  Decide Independent & Dependent variables
###################################################################################################

print(Border)
print("Step 3 :  Decide Independent & Dependent variables")
print(Border)

# X : Independent variable  : features
# Y : Dependent variables : Labels

feature_cols = [
                "sepal length (cm)",
                "sepal width (cm)",
                "petal length (cm)",
                "petal width (cm)"
               ]

X = df[feature_cols]            # 150*4
Y = df["species"]               # 150*1

print("X Shape : ", X.shape)
print("Y Shape : ", Y.shape)

##################################################################################################
# Step 4 : Visualisation of Dataset
###################################################################################################

print(Border)
print("Step 4 : Visualisation of Dataset")
print(Border)

# Scatter plot
plt.figure(figsize= (7,5))

for sp in df["species"].unique():
    temp = df[df["species"] == sp]
    plt.scatter(temp["petal length (cm)"], temp["petal width (cm)"],label = sp)
    
plt.title("Marvellous Iris Case study")

plt.xlabel("petal length (cm)")
plt.ylabel("petal idth (cm)")

plt.legend()
plt.grid()              # graphical representation
plt.show()
    