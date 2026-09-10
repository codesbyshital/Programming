import pandas as pd
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler
from sklearn.cluster import KMeans

def main():

    #step 1 : load Data

    df = pd.read_csv("Mall Customers.csv")

    print("Dataset loaded with values")
    print(df.head())

    print("Missing values :")
    print(df.isnull().sum())

    #step 2:  feature selection   no lables

    X = df[["AnnualIncome","SpendingScore"]]

    #step 3:  scaler the data

    scaler = StandardScaler()

    X_SCaled = scaler.fit_transform(X)    # training data  , both columns

    print("Scaled Data :")
    print(X_SCaled.head())    # first rows

    # step 4 : Elbow method

    WCSS = []

    for k in range(1,11):
        model = KMeans(
            n_clusters= k,      # number of k 
            random_state= 42,
            n_init=10
        )

        model.fit(X_SCaled)
        WCSS.append(model.inertia_)     #

    print("Values o WCSS :")

    for i in range(len(WCSS)):
        print(f"{i+1} : {WCSS[i]}")    


        
    
if __name__ == "__main__":
    main()