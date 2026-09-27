# WinePredictor Case Study: load data from csv.
# multiclass classification

import pandas as pd             # read csv
import matplotlib.pyplot as plt  # for visualisation

from sklearn.neighbors import KNeighborsClassifier      # KNeghbours algo
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score, confusion_matrix
from sklearn.preprocessing import StandardScaler        

def MarvellousClassifier(DataPath):
    border = "-"*60

    print(border)
    print("Step 1 : Load the dataset from CSV file")
    print(border)

    df = pd.read_csv(DataPath)

    print(border)
    print("Some entries from dataset : ")
    print(df.head())
    print(border)

def main():
    MarvellousClassifier("WinePredictor.csv")

if __name__ == "__main__":
    main()