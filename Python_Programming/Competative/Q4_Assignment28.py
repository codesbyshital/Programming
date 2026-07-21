#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_28: Q.4: write a program which accept two file names from user, and copy contents of 
#                                  first file ino second file.
# Input  :  ABC.txt  Demo.txt
# Output :  Content of ABC.txt copied into Demo.txt                                    
#                                     
# Date:            19/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import os

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: CopyContent: Copy content of of file into another file.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


def CopyContent(FileName1,FileName2):
    try:
        fobj1 = open(FileName1,"r")                  # read mode
        data = fobj1.read()
        
        fobj2 = open(FileName2,"w")                  # read mode

        fobj2.write(data)
        
        print("File content gets copied to destination file.")         
    
    
    except FileNotFoundError :
        print("Unable to open file, file does not exist.")
        return None            
                

def main():        
        
        Border = "-"*60
        print(Border)         
        
        fname1 = input("Enter the Source File name :")
        fname2 = input("Enter the destination File name :")
        
        print(Border)
               
        CopyContent(fname1,fname2)                           
                   
        print(Border)                    
    
        
if __name__ == "__main__" :
    main()