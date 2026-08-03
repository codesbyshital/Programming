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

import sys
import os

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: CountLine : counts the number of lines from input file.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


def CountLine(FileName):
    count = 0
    fobj = open(FileName,"r")                  #read mode
    
    for Line in fobj:
        count = count + 1
                
    
    fobj.close()
    
    return count
    

def main():        
        
        Border = "-"*60
        print(Border)         
        
        #fname = input("Enter the File name :")
            
        if(len(sys.argv) == 2):
            if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
                print("This Automation script is used to Travel the Directory")
                print("For better usage please check --u flag")
            elif(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
                print("Please execute the script as :")
                print("Python FileName.py DirectoryName")
                print("Directory Name should be Absolute path")
            else:
                
                Ret = CountLine(sys.argv[1])                      
                print("Number of Lines in the given File is : ",Ret) 
               
                
        else :        
            print("Invalid number of arguments")
            print("Please use --h  / --u for more information")
            
        print(Border)
        print(" Thank you for using Marvellous Automation Script ")
        print(Border)   
       
                   
    
        
if __name__ == "__main__" :
    main()