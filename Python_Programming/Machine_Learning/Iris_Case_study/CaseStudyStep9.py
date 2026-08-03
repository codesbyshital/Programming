import pandas as pd                 # Series(1D array) , Dataframe(2D array) & Panel(3D array : removed now)

# for visualisation
import matplotlib.pyplot as plt
import seaborn as sns

from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import (
    accuracy_score,
    confusion_matrix,
    classification_report
    )


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

##################################################################################################
# Step 5 : Split the Dataset for Training & Testing
###################################################################################################

print(Border)
print("Step 5 : Split the Dataset for Training & Testing")
print(Border)

# random_state : shuffling
X_train,X_test,Y_train,Y_test = train_test_split(X,Y,test_size=0.5,random_state=42)

print("Dataset splitting activity done")

print("X : ",X.shape)               #150,4
print("Y : ",Y.shape)               #150,

print("X_train : ",X_train.shape)           # 75,4
print("X_test : ",X_test.shape)             # 75,4

print("Y_train : ",Y_train.shape)           # 75,
print("Y_test : ",Y_test.shape)             # 75,


##################################################################################################
# Step 6 : Build the Model
###################################################################################################

print(Border)
print("Step 6 : Build the Model")
print(Border)    

model = DecisionTreeClassifier(max_depth=5)            #decision tree level = 5

print("Model gets created successfully")

##################################################################################################
# Step 7 : Train the Model
###################################################################################################

print(Border)
print("Step 7 : Train the Model")
print(Border)    

model.fit(X_train,Y_train)              #training

print("Model Trained successfully..")

##################################################################################################
# Step 8 : Evaluate the Model
###################################################################################################

print(Border)
print("Step 8 : Evaluate the Model")
print(Border)    

Y_pred = model.predict(X_test)          # testing

print("Model Evaluation is done")

print("Expected answers : ")
print(Y_test)
print("Predicted answers : ")
print(Y_pred)



##################################################################################################
# Step 9 : Evaluate the Model performance
###################################################################################################

print(Border)
print("Step 9 : Evaluate the Model performance")
print(Border)    

accuracy = accuracy_score(Y_test,Y_pred)
print("Accuracy of Model is : ",accuracy*100)

print("Confusion Matrix :")
cm = confusion_matrix(Y_test,Y_pred)
print(cm)


print("Classification Report : ")
print(classification_report(Y_test,Y_pred))

