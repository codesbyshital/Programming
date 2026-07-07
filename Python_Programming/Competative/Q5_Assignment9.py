#//////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  ChkDivisible
#        
# Description:     Assignment_9: Q.5: Write a program which accept one number & check whether it is divisible 
#                                     by 3 & 5.
# Input  :         5
# Output :         125
#                                     
# Date:            24/05/2026
# Author:          Shital Ajit Nikam   
#
#//////////////////////////////////////////////////////////////////////////////////////////////////////////

def ChkDivisible(No1):
    if(No1 % 3 == 0 and No1 % 5 == 0):
        return True
    else:
        return False

    
def main():
    value1 = int(input("Enter the number: "))
        
    Ret = ChkDivisible(value1)   
    
    if(Ret == True):
        print(f"{value1} is divisible by 3 & 5") 
    else :
        print(f"{value1} is not divisible by 3 & 5")  
     
    
if __name__ == "__main__":
    main()