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
     
    df = pd.read(filename)

    print("Dataset loaded successfully")
    print(df.head())

    return df

#---------------------------------------------------------------------------------------------------------------
#   Function Name : main()
#   Description :   Entry point function
#   
#   Author:         Shital Nikam
#   Date :          16/08/2026
#----------------------------------------------------------------------------------------------------------------

def main():
    LoadData("MarvellousTitanicDataset.csv")
    

if __name__ == "__main__":
    main()