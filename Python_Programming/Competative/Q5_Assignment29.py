#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_29: Q.5: write a program which accept file name and one string from user and returns
#                                  Frequency(count of occurances) of that string in the file. I
# Input  :  Demo.txt  Marvellous      
# Output :  Success  Or  Failure                                  
#                                     
# Date:            19/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import os
import sys

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: Frequency: Count the number of occurances of the string in file.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Frequency(FileName,str):
    try:
        fobj = open(FileName,"r")                  # read mode        
        
        data = fobj.read()
        words = data.split()
        count = 0
        
        for word in words:
            if word == str :
                count = count + 1      
        return count
             
    
    except FileNotFoundError :
        print("Unable to open file, file does not exist.")
        return None            
                

def main():        
        
        Border = "-"*60
        print(Border)                  
        fname = input("Enter the Source File name :")
        fstring = input("Enter the string to check :")
        
        print(Border)
               
        Ret = Frequency(fname,fstring)    
        print("Number of frequency is : ",Ret)                                                      
                   
        print(Border)                    
    
        
if __name__ == "__main__" :
    main()