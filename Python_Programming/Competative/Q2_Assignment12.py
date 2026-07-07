#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Factors
#        
# Description:     Assignment_12: Q.2: Write a program which accepts one Number & print its Factors. 
#                                        
# Input  :         12
# Output :         1  2  3  4  6  12
#                                     
# Date:            24/05/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Factors(No):
    i = 0
    fact = 0
    Digit = 0 
    
    for i in range(1,No+1):
        if(No % i == 0):
            print(f"{i}",end='  ')
        
    print("\n")       
    
def main():
    value = int(input("Enter the Number: "))
    
    print("Factors are: ")    
    Factors(value) 
    
    
              
    
if __name__ == "__main__":
    main()