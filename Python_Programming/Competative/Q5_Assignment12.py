#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Display
#        
# Description:     Assignment_12: Q.5: Write a program which accepts one Number & prints that many numbers in reverse 
#                                      order. 
# Input  :         5
# Output :         5  4  3  2  1 
#                                     
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Display(No):
    i = 0
    
    if(No < 0):                         # Updater used
        No = -No
        
    for i in range(No,0,-1):            # -1 it behave like -- operator
        print(f"{i}",end= '  ')
    
    
def main():
    value = int(input("Enter the Number: "))
        
    Ret = Display(value)      
              
    
if __name__ == "__main__":
    main()