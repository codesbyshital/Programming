#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Display
#        
# Description:     Assignment_12: Q.4: Write a program which accepts one Number & prints that many numbers starting 
#                                      from 1. 
# Input  :         5
# Output :         1  2  3  4  5                                     
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Display(No):
    i = 0
    
    if(No < 0):                         # Updater used
        No = -No
        
    for i in range(1,No+1):
        print(f"{i}",end='  ')
    
    
def main():
    value = int(input("Enter the Number: "))
        
    Ret = Display(value)      
              
    
if __name__ == "__main__":
    main()