#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Cube
#        
# Description:     Assignment_14: Q.2: Write a lambda function which accepts one number & returns cube of that number. 
#                                      
# Input  :         4
# Output :         64                                      
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Cube = lambda No: No ** 3                 # Cube of number
    
        
def main():
    value = int(input("Enter the Number: "))    
        
    Ret = Cube(value) 
    print("Cube of Number is : ",Ret)      
              
    
if __name__ == "__main__":
    main()