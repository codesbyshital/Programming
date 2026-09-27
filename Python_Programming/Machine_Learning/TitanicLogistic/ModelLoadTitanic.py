import pandas as pd
import joblib

def LoadModel(filename):
    model = joblib.load(filename)   # loads model

    print("Model loaded successfully")

    print(model.feature_names_in_)
    return model


def PredictPassenger(model):
    print("Enter the Information")

    Passengerid = int(input("Enter the Passengerid ")) 
    Pclass = int(input("Enter the Pclass (1/2/3)"))
    Sex = int(input("Enter the Sex : (0 - Male /1- Female)"))
    Age =   float(input("Enter Age : "))
    sibsp = int(input("Enter number Sibling & Spouse :"))
    Parch = int(input("Enter number Parent & Child :"))
    Fare = float(input("Enter number Fare :"))
    zero = float(input("Enter for Zero :"))
    Embarked = float(input("Enter Embarked (0/1/2) :"))

    passenger = pd.DataFrame([{
    "Passengerid" : Passengerid,
    "Pclass" : Pclass,
    "Sex" : Sex,
    "Age" : Age,
    "sibsp" : sibsp,
    "Parch" : Parch,
    "Fare" : Fare,
    "zero" : zero,
    "Embarked_1.0" : 1 if Embarked == 1 else 0,
    "Embarked_2.0" : 1 if Embarked == 2 else 0

    }])

    passenger = passenger[model.feature_names_in_]

    result = model.predict(passenger)

    print("Prediction for Survival is :")
    print(result)


def main():
    model = LoadModel("MarvellousTitanic.pkl")

    PredictPassenger(model)

if __name__ == "__main__":
    main()