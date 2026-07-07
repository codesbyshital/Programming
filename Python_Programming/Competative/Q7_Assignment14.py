#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  ChkDivisible
#        
# Description:     Assignment_14: Q.7: Write a lambda function which accepts one number & returns True if number is 
#                                      divisible by 5.
# Input  :         13
# Output :         Number is Odd  
# Input  :         12
# Output :         Number is Even                                  
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ChkDivisible = lambda No : No % 5 == 0                 # it returns true if No is Odd
    
        
def main():
    value = int(input("Enter the Number: "))      
        
    Ret = ChkDivisible(value) 
    
    if(Ret == True):
        print("Number is divisible by 5 ")
    else:
        print("Number is not divisible by 5 ")     
              
    
if __name__ == "__main__":
    main()