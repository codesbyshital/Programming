# Linear Regression : user defined
# calculate x bar, Y bar, mean , m

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

def MarvellousPredictor():
    #Load the data
    X = [1,2,3,4,5]
    Y = [3,4,2,4,5]

    print("Values of Independent variables X : ",X)
    print("Values of Dependent variables Y : ",Y)

    sum_x = 0
    sum_y = 0

    for i in range(len(X)):
        sum_x = sum_x + X[i]                # sum of X
        sum_y = sum_y + Y[i]                # sum of Y

    mean_x = sum_x / len(X)         # X bar
    mean_y = sum_y / len(Y)     # y bar

    print("Mean_X is : ",mean_x)
    print("Mean_Y is : ",mean_y)

    n = len(X)   # 5

    numerator = 0
    denomerator = 0

    # formula : m = sum(x-xbar) * (y-ybar)  / sum(x-xbar) ** 2
    # calculate slope : m

    for i in range(n):
        numerator = numerator + ((X[i]-mean_x)*(Y[i]-mean_y)) 
        denomerator = denomerator + ((X[i] - mean_x)**2)

    m = numerator / denomerator

    print("Slope of line ie m is : ",m)


def main():    
    MarvellousPredictor()
    
    
if __name__ == "__main__":
    main()
    