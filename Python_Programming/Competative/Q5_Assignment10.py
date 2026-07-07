#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  EvenDisplay
#        
# Description:     Assignment_10: Q.4: Write a program which accepts one number & prints all odd numbers till that 
#                                      number.
# Input  :         10
# Output :         1   3   5   7   9
#                                     
# Date:            24/05/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def EvenDisplay(No):
    i = 0   
    if(No < 0):
        print("Please enter valid number.")
    else:                
        for i in range(1,No+1):                
            if(i % 2 != 0):             # checks if Number is not divisible by 2
                print(f"{i}",end="\t")
                   
    
def main():
    value = int(input("Enter the number: "))
        
    print("Odd Numbers are: ")
    EvenDisplay(value)   
            
    
if __name__ == "__main__":
    main()