#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  ChkPerfect
#        
# Description:     Assignment_13: Q.3: Write a program which accepts one number & check whether it is perfect number. 
#                                      or not
# Input  :         6
# Output :         It is Perfect Number.                                      
#                                     
# Date:            30/05/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def ChkPerfect(No):
    i = 0
    Sum = 0
    for i in range(1,No):
        if(No % i == 0):
            Sum = Sum + i       
           
    return Sum == No                    # return True  / False
    
        
def main():
    value = int(input("Enter the Number: "))    
        
    Ret = ChkPerfect(value) 
    if(Ret == True) :
        print("It is Perfect Number")  
    else:
        print("It is not Perfect Number")  
              
    
if __name__ == "__main__":
    main()