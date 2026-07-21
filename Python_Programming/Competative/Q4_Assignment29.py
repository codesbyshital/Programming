#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_29: Q.4: write a program which accept two file names through command line arguments and  
#                                  Compare the content of both files. I
#                                  If both files contains same content, display Success. Otherwise display Failure.
#                                  
# Input  :  (Command line) Demo.txt  Hello.txt       
# Output :  Success  Or  Failure                                  
#                                     
# Date:            19/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import os
import sys

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: CompareFiles: compares content of 2 files.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def CompareFiles(FileName1,FileName2):
    try:
        fobj1 = open(FileName1,"r")                  # read mode
        fobj2 = open(FileName2,"r")                  # Create file Demo.txt
        
        data1 = fobj1.read();
        data2 = fobj2.read();
        
        if data1 == data2 :
            return True
        else:
            return False    
                
    
    
    except FileNotFoundError :
        print("Unable to open file, file does not exist.")
        return None            
                

def main():        
        
        Border = "-"*60
        print(Border)                  
                
        if(len(sys.argv) == 3):                         # 3 arguments : FileName.py,FileName1,FileName2
            if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
                print("This script is used to compare the file contents")
                print("For better usage please check --u flag")
            elif(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
                print("Please execute the script as :")
                print("Python FileName.py FileName1 FileName2")
                
            else:
                              
                Ret = CompareFiles(sys.argv[1],sys.argv[2])    
                
                if (Ret == True)    :
                    print("Success")                # both files are Identical
                else:
                    print("Failure")                 # both files are Differrent
               
                
        else :        
            print("Invalid number of arguments")
            print("Please use --h  / --u for more information")           
                                                 
                   
        print(Border)                    
    
        
if __name__ == "__main__" :
    main()