#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_29: Q.3: write a program which accept existing file name through command line arguments.  
#                                  creates new file named Demo.txt & copies all content from given file to Demo.txt
# Input  :  (Command line) ABC.txt       
# Output :  Create Demo.txt & copy contents of ABC.txt inti Demo.txt                                   
#                                     
# Date:            19/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import os
import sys

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: Copy: copy one file content to another.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def CopyContent(FileName1):
    try:
        fobj1 = open(FileName1,"r")                  # read mode
        data = fobj1.read()
        
        fobj2 = open("Demo.txt","w")                  # Create file Demo.txt

        fobj2.write(data)
        
        print("File content gets copied to destination file.")         
    
    
    except FileNotFoundError :
        print("Unable to open file, file does not exist.")
        return None            
                

def main():        
        
        Border = "-"*60
        print(Border)                  
                
        if(len(sys.argv) == 2):
            if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
                print("This script is used to copy the contents of one file into another")
                print("For better usage please check --u flag")
            elif(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
                print("Please execute the script as :")
                print("Python FileName.py FileName")
               
            else:
                              
                CopyContent(sys.argv[1])        
               
                
        else :        
            print("Invalid number of arguments")
            print("Please use --h  / --u for more information")           
                                                 
                   
        print(Border)                    
    
        
if __name__ == "__main__" :
    main()