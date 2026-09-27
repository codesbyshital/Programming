# Multiple Linear Regression

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_squared_error, r2_score

def MarvellousRegression(DataPath):
    Border = "-"*70
    # Step 1 :Load data
    print(Border)
    print("Step 1: Load  the Data")
    print(Border)

    df = pd.read_csv(DataPath)
    print(df.head())

    # Step 2 :Remove unwanted column    
    print(Border)
    print("Step 2: Remove unwanted column")
    print(Border)

    if ("Unnamed: 0" in df.columns) :
        df = df.drop(columns=["Unnamed: 0"])

    print(df.head())

    # Step 3 :Check missing values    
    print(Border)
    print("Step 3: Remove unwanted column")
    print(Border)   

    print("Total missing values is :")
    print(Border)
    print(df.isnull().sum())
    print(Border)

    # Step 4 :Statistical Summary    
    print(Border)
    print("Step 4: Statistical Summary")
    print(Border)

    print(df.describe())                # info

    # Step 5 :Correlation    
    print(Border)
    print("Step 5: Correlation")
    print(Border)

    print(df.corr())

    # Step 6 :Seperate Independent & Dependent Variables    
    print(Border)
    print("Step 6: Seperate Independent & Dependent Variables")
    print(Border)

    X = df[["TV","radio","newspaper"]]          # 2D Array
    Y = df["sales"]

    print("Independent Variables : ")
    print(X.head())

    print("Dependent Variables : ")
    print(Y.head())

    # Step 7 :Split the dataset    
    print(Border)
    print("Step 6: Split the dataset")
    print(Border)

    X_train, X_test, Y_train, Y_test = train_test_split(
        X,
        Y,
        test_size=0.2,
        random_state=42
    )

    print("Training Data : ",X_train.shape)
    print("Test data : ",X_test.shape)

    # Step 8 :Create and Train the Model    
    print(Border)
    print("Step 8: Create and Train the Model")
    print(Border)

    model = LinearRegression()

    model = model.fit(X_train,Y_train)
    print("MOdel Trained Successfully")

    # Step 9 :Test the Model    
    print(Border)
    print("Step 9: Test the Model")
    print(Border)

    Y_pred = model.predict(X_test)

    print("Expected Answers :")
    print(Y_test[:3])
    
    print("Predicted Answers :")
    print(Y_pred[:3])           # first 5

# Step 10 :Evaluate the Model    
    print(Border)
    print("Step 10: Evaluate the Model")
    print(Border)

    # R square , MSE

    MSE = mean_squared_error(Y_test, Y_pred)

    RMSE = np.sqrt(MSE)

    R2 = r2_score(Y_test, Y_pred)

    print("MSE :",MSE)
    print("RMSE :",RMSE)
    print("R2 : ",R2)

    # Step 11 :Dispaly coefficients    
    print(Border)
    print("Step 11: Dispaly coefficients")
    print(Border)

    print("TV Coefficient m1:",model.coef_[0])        # 0 index column
    print("Radio Coefficient m2 :",model.coef_[1])        # 1 index column
    print("Newspaper Coefficient m3:",model.coef_[2])        # 2 index column

    print("Intercept C: ",model.intercept_)



def main():
    MarvellousRegression("Advertising.csv")
    

if __name__ == "__main__":
    main()