import pandas as pd
import numpy as np

import joblib       # used to preserve the model

from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score, confusion_matrix

# Step 1: Load Data

#---------------------------------------------------------------------------------------------------------------
#   Function Name : LoadData()
#   Description :   Load teh Data from csv
#   Input :         Name of the csv file
#   Output:         Data Frame
#   Author:         Shital Nikam
#   Date :          16/08/2026
#----------------------------------------------------------------------------------------------------------------

def LoadData(filename):
     
    df = pd.read_csv(filename)

    print("Dataset loaded successfully")
    print(df.head())

    return df


# Step 2 : Data Preprocessing
#---------------------------------------------------------------------------------------------------------------
#   Function Name : PreprocessData()
#   Description :   It performs Data Analysis
#   Input :         Data Frame
#   Output:         Updated Data Frame
#   Author:         Shital Nikam
#   Date :          16/08/2026
#----------------------------------------------------------------------------------------------------------------

def PreprocessData(df):
    df = df.drop([
        "Passengerid",
        "zero",
        "name"
    ],
    errors="ignore"
    )

    # Handle missing values

    df["Age"]  = df["Age"].fillna(df["Age"].median())
    df["Fare"]  = df["Fare"].fillna(df["Fare"].median())
    df["Embarked"]  = df["Embarked"].fillna(df["Embarked"].mode()[0])


    # convert categorical to Numeric data   1 0 classification (binary)  encoding (one hot) Embarked split into 2 columns
    df = pd.get_dummies(
        df,
        columns=["Embarked"],
        drop_first= True,
        dtype=int
    )

    print(df.head())
    print("Data Preprocessing completed..")

    return df

# Step 3 : Split Data 
#---------------------------------------------------------------------------------------------------------------
#   Function Name : SplitData()
#   Description :   It performs split activity
#   Input :         Data Frame
#   Output:         4 subset for training & testing
#   Author:         Shital Nikam
#   Date :          16/08/2026
#----------------------------------------------------------------------------------------------------------------

def SplitData(df):
    X = df.drop("Survived", axis = 1)
    Y = df["Survived"]

    X_train, X_test, Y_train, Y_test = train_test_split(
        X,
        Y,
        test_size=0.2,
        random_state=42
    )

    print("Dataset Splitting completed Successfully..")

    return X_train, X_test, Y_train, Y_test


# Step 4 : Train Model 
#---------------------------------------------------------------------------------------------------------------
#   Function Name : TrainModel()
#   Description :   It performs model training
#   Input :         Training features & lable
#   Output:         Trained model
#   Author:         Shital Nikam
#   Date :          16/08/2026
#----------------------------------------------------------------------------------------------------------------
def TrainModel(X_train, Y_train):
    model = LogisticRegression(max_iter=1000)

    model = model.fit(X_train,Y_train)

    print("Mpdel Trained Successfully..")

    return model

# Step 5 : Evaluate Model 
#---------------------------------------------------------------------------------------------------------------
#   Function Name : EvaluateModel()
#   Description :   It performs model testing
#   Input :         Model , testing data (featured, labels)
#   Output:         none
#   Author:         Shital Nikam
#   Date :          16/08/2026
#----------------------------------------------------------------------------------------------------------------

def EvaluateModel(model,X_test,Y_test):

    Y_pred = model.predict(X_test)

    accuracy = accuracy_score(Y_test, Y_pred)

    print("Accuracy is : ", accuracy)

    print(confusion_matrix(Y_test, Y_pred))



#---------------------------------------------------------------------------------------------------------------
#   Function Name : main()
#   Description :   Entry point function
#   
#   Author:         Shital Nikam
#   Date :          16/08/2026
#----------------------------------------------------------------------------------------------------------------

def main():
    # Step 1:
    df = LoadData("MarvellousTitanicDataset.csv")

    # step 2:
    df = PreprocessData(df)

    # step 3 : Split data
    X_train, X_test, Y_train, Y_test = SplitData(df)

    # step 4:
    model = TrainModel(X_train, Y_train)

    # step 5:
    EvaluateModel(model,X_test,Y_test)

    

if __name__ == "__main__":
    main()