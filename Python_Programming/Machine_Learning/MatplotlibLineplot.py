# Matplotlib Line Plot

import pandas as pd
import matplotlib.pyplot as plt

def main():
    X = [1,2,3,4,5]
    Y = [10,25,18,35,30]
    plt.plot(               # for line plot
        X,                      # positional argument  values of X axis
        Y,
        marker = "o",           # keywords
        linestyle = "--",
        linewidth = 2,
        markersize = 7,
        label = "Marks"
    )
    
    plt.title("Marvellous Line plot")
    plt.xlabel("Student Number")
    plt.ylabel("Marks")
    
    plt.grid(True)          # grid plot
    
    plt.legend()        # display all infomation
    plt.show()      # display on screen 
    
if __name__ == "__main__":
    main()
    