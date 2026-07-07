#//////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  chkGreater
#        
# Description:     Assignment_9: Q.2: Write a program which contains one function chkGreater() that accept  
#                                     two numbers & print greater number.
# Input  :         10  20
# Output :         20 is greater.   
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#//////////////////////////////////////////////////////////////////////////////////////////////////////////

def chkGreater(No1,No2):
    if(No1 > No2):
        return True
    else:
        return False
    
    
def main():
    value1 = int(input("Enter first number: "))
    value2 = int(input("Enter second number: "))
    
    Ret = chkGreater(value1,value2)
    
    if(Ret == True):
        print(f"{value1} is greater") 
    else :
        print(f"{value2} is greater")
   
     
    
if __name__ == "__main__":
    main()