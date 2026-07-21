#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_28: Q.3: write a program which accept name of file from user & Displays content of file 
#                                      line by line on the screen.
# Input  :  Demo.txt       
# Output :  Display each line of Demo.txt                                    
#                                     
# Date:            19/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import os

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: Display: Display file content line by line.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


def Display(FileName):
    try:
        fobj = open(FileName,"r")                  # read mode
        data = fobj.read()
        print(data)         
    
    
    except FileNotFoundError :
        print("Unable to open file, file does not exist.")
        return None            
                

def main():        
        
        Border = "-"*60
        print(Border)         
        
        fname = input("Enter the File name :")
        
        print(Border)
        print("File contents are : ")
        
        Display(fname)                           
                   
        print(Border)                    
    
        
if __name__ == "__main__" :
    main()