#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  ChkPrime
#        
# Description:     Assignment_11: Q.1: Write a program which accepts one number & check whether it is Prime or not. 
#                                      
# Input  :         11
# Output :         11 is prime number.
#                                     
# Date:            24/05/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def ChkPrime(No):
    i = 0  
    Flag = True 
    
    if(No <= 1):
        return False    
    
                
    for i in range(2,int(No/2)):             # We will start loop from 2. number never has a factor greater than n/2
        if((No % i) == 0):                   # if any factor found 
            Flag = False
            break
        else:
            Flag = True
            
    return Flag                              # factors not found
            
                   
    
def main():
    value = int(input("Enter the number: "))
        
    Ret = ChkPrime(value) 
    if(Ret == True):
        print(f"{value} is Prime number ")
    else:
        print(f"{value} is not Prime number")
      
            
    
if __name__ == "__main__":
    main()