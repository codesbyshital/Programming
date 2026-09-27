# Matplotlib Bar Plot

import pandas as pd
import matplotlib.pyplot as plt

def main():
    languages = ["C","C++","Java","Python"]
    students = [30,40,35,55]
    
    plt.bar(            # for Bar
        languages,              # value of x-axis
        students,                   # value of y-axis
        width = 0.6,            # width of bars
        edgecolor = "black" ,        # border color of bars
        linewidth = 1,              # width of bars
        alpha = 0.8,                #transperance 0.0 to 1.0            color darkness
        label = "Students"          #legend text
    )
    
    plt.title("Marvellous Bar plot")
    plt.xlabel("Languages")
    plt.ylabel("Students")
    #plt.xlabel("Languages")    
    
    plt.legend()        # display all infomation
    plt.show()      # display on screen 
    
if __name__ == "__main__":
    main()
    