#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Maximum
#        
# Description:     Assignment_14: Q.3: Write a lambda function which accepts two numbers & returns maximum number. 
#                                      
# Input  :         4 6
# Output :         Maximum Number is: 6                                      
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Maximum = lambda No1,No2: No1 > No2                 # it returns true if No1 is max
    
        
def main():
    value1 = int(input("Enter the first Number: "))  
    value2 = int(input("Enter the second Number: "))  
        
    Ret = Maximum(value1,value2) 
    
    if(Ret == True):
        print("Maximum of Number is : ",value1)
    else:
        print("Maximum of Number is : ",value2)     
              
    
if __name__ == "__main__":
    main()