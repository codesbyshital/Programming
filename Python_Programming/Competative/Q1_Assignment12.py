#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  ChkVowel
#        
# Description:     Assignment_12: Q.1: Write a program which accepts one character & checks whether it is Vowel 
#                                      or Consonant.   
# Input  :         A
# Output :         It is Vowel
#                                     
# Date:            24/05/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def ChkVowel(Ch):
    if(Ch == 'A' or Ch == 'E' or Ch == 'I' or Ch == 'O' or Ch == 'U' or Ch == 'a' or Ch == 'e' or Ch == 'i' or Ch == 'o' or Ch == 'u'):
        return True
    else :
        return False    
               
    
def main():
    value = input("Enter the Character: ")
        
    Ret = ChkVowel(value) 
    
    if(Ret == True):
        print("Character is Vowel")
    else:
        print("Character is Consonant")
              
    
if __name__ == "__main__":
    main()