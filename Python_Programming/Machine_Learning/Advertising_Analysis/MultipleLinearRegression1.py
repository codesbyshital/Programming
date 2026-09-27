# Multiple Linear Regression

import numpy as np
from sklearn.linear_model import LinearRegression

def main():
    X = np.array([
        [1,7],              # study hours , sleep hours:  Independent var : x1,x2
        [2,6],
        [3,7],
        [4,6],
        [5,8]
        ])
    
    Y = np.array([50,55,60,65,70])          # dependent variable is only one

    model = LinearRegression()

    model = model.fit(X,Y)     # train

    print(model.predict([[6,5]]))     # predict for 6,5   : test

    


if __name__ == "__main__":
    main()