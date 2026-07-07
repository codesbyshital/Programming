#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Area
#        
# Description:     Assignment_13: Q.1: Write a program which accepts length & width of rectangle and print its Area. 
#
# Input  :         10 7
# Output :         Area = 70 sqm                                      
#                                     
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Area(length,width):
    
    if(length < 0 or width < 0):                # Updator used
        length = -length
        width = -width
        
    Area = length * width
    
    return Area      
    
        
def main():
    value1 = int(input("Enter the length of Rectangle: "))
    value2 = int(input("Enter the width of Rectangle: "))
        
    Ret = Area(value1,value2)  
    
    print(f"Area of Rectanlge is: {Ret} Sqm")    
              
    
if __name__ == "__main__":
    main()