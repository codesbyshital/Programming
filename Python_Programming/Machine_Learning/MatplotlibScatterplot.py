# Matplotlib Scatter Plot

import pandas as pd
import matplotlib.pyplot as plt

def main():
    study_hours = [1,2,3,4,5,6]
    marks = [35,42,50,62,72,85]    
    
    plt.scatter(
        study_hours,        #value of x-axis
        marks,              #value of y-axis
        s = 100,            #
        marker = "o",       #  
        alpha = 0.8,        # transperancy
        edgecolor="black",  # edge color
        linewidths=1,       # line width
        label = "Students"  # label
    )
    
    plt.title("Marvellous Scatter plot")
    plt.xlabel("Study_Hours")
    plt.ylabel("Obtained Marks")
    plt.grid(True)
        
    plt.legend()        # create all infomation in RAM
    plt.show()      # display on screen 
    
    
if __name__ == "__main__":
    main()
    