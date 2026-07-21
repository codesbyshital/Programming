#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_29: Q.1: write a program which accept name of file from user, open that File & Displays  
#                                      entire content of file on console.
# Input  :  Demo.txt       
# Output :  Display content of Demo.txt                                    
#                                     
# Date:            19/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import os

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: Display: Display file content on console.
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