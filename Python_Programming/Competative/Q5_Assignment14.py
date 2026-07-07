#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Even
#        
# Description:     Assignment_14: Q.5: Write a lambda function which accepts one number & returns True if number is 
#                                      Even otherwise False
# Input  :         6
# Output :         Number is Even  
# Input  :         3
# Output :         Number is Odd                                  
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Even = lambda No : No % 2 == 0                 # it returns true if No is Even
    
        
def main():
    value = int(input("Enter the Number: "))      
        
    Ret = Even(value) 
    
    if(Ret == True):
        print("Number is Even ")
    else:
        print("Number is Odd ")     
              
    
if __name__ == "__main__":
    main()