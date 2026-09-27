# Multiple Linear Regression

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import root_mean_squared_error, r2_score

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



def main():
    MarvellousRegression("Advertising.csv")
    

if __name__ == "__main__":
    main()