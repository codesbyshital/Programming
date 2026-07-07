#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  RevNumber
#        
# Description:     Assignment_11: Q.4: Write a program which accepts one number & print reverse of that number. 
#                                      
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
         
    while(No != 0):   
        Digit = No % 10                         # Seperate the Digit
        Rev = (Rev * 10) + Digit                # Reverse the digits             
        No = No // 10                   
                    
    return Rev;              
    
def main():
    value = int(input("Enter the number: "))
        
    Ret = RevNumber(value) 
    print("Reverse number is : ",Ret)
               
    
if __name__ == "__main__":
    main()