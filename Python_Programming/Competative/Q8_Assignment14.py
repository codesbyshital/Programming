#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Add
#        
# Description:     Assignment_14: Q.8: Write a lambda function which accepts two numbers & returns Addition.
#                                      
# Input  :         10   11
# Output :         Addition is: 21                                
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Add = lambda No1,No2 : No1 + No2                 # it returns addition of 2 numbers    
        
def main():
    value1 = int(input("Enter the first Number: "))  
    value2 = int(input("Enter the second Number: "))  
        
    Ret = Add(value1,value2) 
    
    print("Addition is: ",Ret)
    
if __name__ == "__main__":
    main()