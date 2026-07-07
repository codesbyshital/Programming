#//////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Square
#        
# Description:     Assignment_9: Q.3: Write a program which accept one number & prints square of that number.
# Input  :         5
# Output :         25
#                                     
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#//////////////////////////////////////////////////////////////////////////////////////////////////////////

def Square(No1):
    Square = 0
    Square = No1 ** 2               #Square of number (No1 ^ 2)
    return Square
    
def main():
    value1 = int(input("Enter the number: "))
        
    Ret = Square(value1)   
    
    print(f"Square of {value1} is {Ret}")   
     
    
if __name__ == "__main__":
    main()