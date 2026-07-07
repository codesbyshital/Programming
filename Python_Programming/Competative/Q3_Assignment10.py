#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Factorial
#        
# Description:     Assignment_10: Q.3: Write a program which accepts one number & prints factorial of that number.
# Input  :         5
# Output :         120   (1*2*3*4*5)
#                                     
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Factorial(No):
    Fact = 1
    i = 0   
    if(No < 0):
        print("Please enter valid number because Factorial is not defined for negative numbers.")
    else:                
        for i in range(1,No+1):                # factorial should check from 1 to that number
            Fact =Fact * i
        return Fact
            
    
def main():
    value = int(input("Enter the number: "))
        
    Ret = Factorial(value)   
    print(f"Factirial of {value} is : ",Ret)
         
    
if __name__ == "__main__":
    main()