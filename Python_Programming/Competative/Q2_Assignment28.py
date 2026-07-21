#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_28: Q.2: write a program which accept name of file from user & Counts total number of 
#                                      words present in file.
# Input  :  Demo.txt       
# Output :  Total number of Words in Demo.txt                                    
#                                     
# Date:            19/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import os

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: CountWords: counts the number of words from input file.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


def CountWords(FileName):
    try:
        fobj = open(FileName,"r")                  # read mode
        data = fobj.read()
        words = data.split()                       # split() seperates the text into words.
        
        return len(words)
    
    
    except FileNotFoundError :
        print("Unable to open file, file does not exist.")
        return None            
                

def main():        
        
        Border = "-"*60
        print(Border)         
        
        fname = input("Enter the File name :")
        
        Ret = CountWords(fname) 
        
        if Ret is not None:
            print("Number of Words in file is :",Ret)                      
                   
        print(Border)                    
    
        
if __name__ == "__main__" :
    main()