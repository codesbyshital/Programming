#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Square
#        
# Description:     Assignment_14: Q.1: Write a lambda function which accepts one number & return square of that number. 
#                                      
# Input  :         5
# Output :         25                                      
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Square = lambda No: No ** 2                 # Square of number
    
        
def main():
    value = int(input("Enter the Number: "))    
        
    Ret = Square(value) 
    print("Square of Number is : ",Ret)      
              
    
if __name__ == "__main__":
    main()