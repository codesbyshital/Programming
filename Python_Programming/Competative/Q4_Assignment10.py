#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  EvenDisplay
#        
# Description:     Assignment_10: Q.4: Write a program which accepts one number & prints all even numbers till that 
#                                      number.
# Input  :         10
# Output :         2    4   6   8   10
#                                     
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def EvenDisplay(No):
    i = 0   
    if(No < 0):
        print("Please enter valid number.")
    else:                
        for i in range(1,No+1):                
            if(i % 2 == 0):             # checks if Number is divisible by 2
                print(f"{i}",end="\t")
                   
    
def main():
    value = int(input("Enter the number: "))
    
    print("Even Numbers are: ")    
    EvenDisplay(value)   
            
    
if __name__ == "__main__":
    main()