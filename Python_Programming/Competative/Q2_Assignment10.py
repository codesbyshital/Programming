#//////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Summation
#        
# Description:     Assignment_10: Q.2: Write a program which accepts one number & prints sum of first N
#                  natural numbers.
# Input  :         5
# Output :         15   (1+2+3+4+5)
#                                     
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#//////////////////////////////////////////////////////////////////////////////////////////////////////////

def Summation(No):
    Sum = 0
    i = 0               
    for i in range(1,No+1):
        Sum = Sum + i
    return Sum    
    
def main():
    value = int(input("Enter the number: "))
        
    Ret = Summation(value)   
    print("Sum of first N natural numbers is : ",Ret)
     
    
if __name__ == "__main__":
    main()