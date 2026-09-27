# Matplotlib Scatter Plot

import pandas as pd
import matplotlib.pyplot as plt

def main():
    
    marks = [45,55,60,62,65,67,70,72,75,78,80,82,85,90,92]    
    
    plt.hist(        
        marks,              #continuous data (x-axis)
        bins = 5,   # number of groups       
          
        alpha = 0.8,        # transperancy
        edgecolor="black",  # border color
        rwidth= 0.9,       # relative width of bars
        label = "Marks"  # label
    )
    
    plt.title("Marvellous Histogram")
    plt.xlabel("Marks")
    plt.ylabel("Frequency")
    #plt.grid(True)
        
    plt.legend()        # create all infomation in RAM
    plt.show()      # display on screen 
    
    
if __name__ == "__main__":
    main()
    