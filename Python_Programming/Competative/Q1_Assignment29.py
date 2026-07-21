#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_29: Q.1: write a program which accept name of file from user & checks whether that file 
#                                      exists in current Directory or not.
# Input  :  Demo.txt       
# Output :  Display whether Demo.txt exists or not.                                    
#                                     
# Date:            19/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import os

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: DirectoryScanner: Display whether Demo.txt exists in crrent directory or not.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


def DirectoryScanner(FileName): 
    CurrentDirectory = os.getcwd()   
    
    for fname in os.listdir(CurrentDirectory):
        if fname == FileName :
            return True
        else:
            return False               
                

def main():        
        
        Border = "-"*60
        print(Border) 
        
        CurrentDirectory = os.getcwd()        
        
        fname = input("Enter the File name :")
        
        Ret = DirectoryScanner(fname) 
        
        if (Ret == True) :
            print("File is present in current Diretory")
            print("path : ",os.path.join(CurrentDirectory,fname))
        else :
            print("File is not present.")              
            
        print(Border)                    
    
        
if __name__ == "__main__" :
    main()