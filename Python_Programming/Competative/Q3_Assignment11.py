#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  SumDigits
#        
# Description:     Assignment_11: Q.3: Write a program which accepts one number & print sum of digits in it. 
#                                      
# Input  :         123
# Output :         6
#                                     
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def SumDigits(No):
    i = 0
    Sum = 0
    Digit = 0 
    if(No < 0):
        No = -No
        
    if(No == 0):
        return 0  
         
    while(No != 0):   
        Digit = No % 10                  # Seperate the Digit
        Sum = Sum + Digit                # Sum the digits             
        No = No // 10                   
                    
    return Sum;              
    
def main():
    value = int(input("Enter the number: "))
        
    Ret = SumDigits(value) 
    print("Summation of Digits is : ",Ret)
               
    
if __name__ == "__main__":
    main()