#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_28: Q.5: write a program which accept file name & a word from user, and check whether 
#                                  that word present in the file or not.
# Input  :  Demo.txt Marvellous
# Output :  Display whether word found in the file or not.                                    
#                                     
# Date:            19/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import os

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: SearchWord: Search the word in the file.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


def SearchWord(FileName, word):
    try:
        fobj1 = open(FileName,"r")                  # read mode
        data = fobj1.read()
        
        if word in data:
            return True
        else:
            return False
      
    
    except FileNotFoundError :
        print("Unable to open file, file does not exist.")
        return None            
                

def main():        
        
        Border = "-"*60
        print(Border)         
        
        fname = input("Enter the Source File name :")
        fword = input("Enter the word to search :")
        
        print(Border)
               
        Ret = SearchWord(fname,fword)    
        if (Ret == True) :
            print("Word found in the file.")
        else :
            print("Word not found in the file.")                                   
                   
        print(Border)                    
    
        
if __name__ == "__main__" :
    main()