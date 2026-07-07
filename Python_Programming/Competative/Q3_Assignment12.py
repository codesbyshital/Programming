#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Add , Sub, Mult, Div
#        
# Description:     Assignment_12: Q.3: Write a program which accepts two Numbers & print its Addition,Substractio, 
#                                      Multiplication,Division. 
#                                     
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


# Lambda function defination

Add = lambda No1,No2 : No1 + No2

Sub = lambda No1,No2 : No1 - No2

Mult = lambda No1,No2 : No1 * No2

Div = lambda No1,No2 : No1 // No2                   # Integer division needs // operator
    
def main():
    value1 = int(input("Enter the First Number: "))
    value2 = int(input("Enter the Second Number: "))
    
    Ret = Add(value1,value2)
    print("Addition is :",Ret)
    
    Ret = Sub(value1,value2)
    print("Substraction is :",Ret)
    
    Ret = Mult(value1,value2)
    print("Multiplication is :",Ret)
    
    Ret = Div(value1,value2)
    print("Division is :",Ret)       
              
    
if __name__ == "__main__":
    main()