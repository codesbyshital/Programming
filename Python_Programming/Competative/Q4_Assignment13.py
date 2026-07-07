#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Binary
#        
# Description:     Assignment_13: Q.4: Write a program which accepts one number & print its Binary equivalent. 
#                                      
# Input  :         10
# Output :         1010                                      
#                                     
# Date:            30/05/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Binary(No):
    Binary = ""
    
    if(No < 0):                             # Updater Used
        No = -No
        
    if(No == 0):                            # If 0 then return "0"
        return "0"
    
    while(No > 0):
        Rem = No % 2
        Binary = str(Rem) + Binary
        No = No // 2
              
    return  Binary                
    
        
def main():
    value = int(input("Enter the Number: "))    
        
    Ret = Binary(value) 
    print("Equivalent Binary Number is : ",Ret)      
              
    
if __name__ == "__main__":
    main()