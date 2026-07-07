#//////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Cube
#        
# Description:     Assignment_9: Q.4: Write a program which accept one number & prints cube of that number.
# Input  :         5
# Output :         125
#                                     
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#//////////////////////////////////////////////////////////////////////////////////////////////////////////

def Cube(No1):
    Square = 0
    Square = No1 ** 3               #Cube of number (No1 ^ 3)
    return Square
    
def main():
    value1 = int(input("Enter the number: "))
        
    Ret = Cube(value1)   
    
    print(f"Square of {value1} is {Ret}")   
     
    
if __name__ == "__main__":
    main()