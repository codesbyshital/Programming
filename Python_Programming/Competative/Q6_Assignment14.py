#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Odd
#        
# Description:     Assignment_14: Q.6: Write a lambda function which accepts one number & returns True if number is 
#                                      Odd otherwise False
# Input  :         13
# Output :         Number is Odd  
# Input  :         12
# Output :         Number is Even                                  
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Odd = lambda No : No % 2 != 0                 # it returns true if No is Odd
    
        
def main():
    value = int(input("Enter the Number: "))      
        
    Ret = Odd(value) 
    
    if(Ret == True):
        print("Number is Odd ")
    else:
        print("Number is Even ")     
              
    
if __name__ == "__main__":
    main()