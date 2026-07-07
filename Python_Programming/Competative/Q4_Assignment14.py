#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Minimum
#        
# Description:     Assignment_14: Q.4: Write a lambda function which accepts two numbers & returns Minimum number. 
#                                      
# Input  :         4 6
# Output :         Minimum Number is: 4                                     
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Minimum = lambda No1,No2: No1 < No2                 # it returns true if No1 is Min
    
        
def main():
    value1 = int(input("Enter the first Number: "))  
    value2 = int(input("Enter the second Number: "))  
        
    Ret = Minimum(value1,value2) 
    
    if(Ret == True):
        print("Minimum of Number is : ",value1)
    else:
        print("Minimum of Number is : ",value2)     
              
    
if __name__ == "__main__":
    main()