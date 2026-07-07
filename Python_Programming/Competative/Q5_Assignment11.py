#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  RevNumber
#        
# Description:     Assignment_11: Q.4: Write a program which accepts one number & check whether number is Palindrome 
#                                      or not.   
# Input  :         123
# Output :         321
#                                     
# Date:            24/05/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def RevNumber(No):
    i = 0
    Rev = 0
    Digit = 0 
    if(No < 0):
        No = -No
        
    if(No == 0):
        return 0  
    
    Temp = No  
    while(No != 0):   
        Digit = No % 10                         # Seperate the Digit
        Rev = (Rev * 10) + Digit                # Reverse the digits             
        No = No // 10   
        
    if(Rev == Temp):                            # Compare original number with reverse number
        return True;
    else:
        return False;                
                    
               
    
def main():
    value = int(input("Enter the number: "))
        
    Ret = RevNumber(value) 
    
    if(Ret == True):
        print("Number is Palindrome")
    else:
        print("Number is not Palindrome")
        
               
    
if __name__ == "__main__":
    main()