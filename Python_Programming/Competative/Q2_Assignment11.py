#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  CountDigits
#        
# Description:     Assignment_11: Q.2: Write a program which accepts one number & prints count of digits in it. 
#                                      
# Input  :         7521
# Output :         4
#                                     
# Date:            24/05/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def CountDigits(No):
    i = 0
    Count = 0 
    if(No < 0):
        No = -No
        
    if(No == 0):
        return 1  
         
    while(No != 0):   
        Count = Count + 1                 
        No = No // 10                    #Seperate the digits
                    
    return Count;              
    
def main():
    value = int(input("Enter the number: "))
        
    Ret = CountDigits(value) 
    print("Number of Digits are : ",Ret)
               
    
if __name__ == "__main__":
    main()