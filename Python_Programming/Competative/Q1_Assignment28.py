#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_28: Q.1: write a program which accept name of file from user & Counts how many Lines 
#                                      are present in file.
# Input  :  Demo.txt       
# Output :   total number of lines on Demo.txt                                    
#                                     
# Date:            19/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import os

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: CountLine : counts the number of lines from input file.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


def CountLine(FileName):
    try:
        fobj = open(FileName,"r")                  #read mode
        count = 0        
        
        for Line in fobj:
            count = count + 1
        return count
    
    
    except FileNotFoundError :
        print("Unable to open file, file does not exist.")
        return None            
    
            

def main():        
        
        Border = "-"*60
        print(Border)         
        
        fname = input("Enter the File name :")
        
        Ret = CountLine(fname) 
        
        if Ret is not None:
            print("Number of Lines in file is :",Ret)                      
                   
        print(Border)                    
    
        
if __name__ == "__main__" :
    main()