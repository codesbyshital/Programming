#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Maximum
#        
# Description:     Assignment_14: Q.10: Write a lambda function which accepts 3 numbers & returns largest number.
#                                      
# Input  :         10   11   34
# Output :         Maximum number is: 34                                
#                                     
# Date:            30/05/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Maximum = lambda No1,No2,No3 : No1 if (No1 >= No2 and No1 >= No3)  else (No2 if No2 >= No3 else No3)             
        
def main():
    value1 = int(input("Enter the first Number: "))  
    value2 = int(input("Enter the second Number: "))  
    value3 = int(input("Enter the third Number: "))
        
    Ret = Maximum(value1,value2,value3) 
    
    print("Maximum number is: ",Ret)
    
if __name__ == "__main__":
    main()