#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Area
#        
# Description:     Assignment_13: Q.2: Write a program which accepts radius of circle & print Area of Circle. 
#
# Input  :         4
# Output :         Area = 50.24 sqm                                      
#                                     
# Date:            30/05/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Area(Radius):
    PI = 3.14
    if(Radius < 0):                # Updator used
        Radius = -Radius
        
    Area = PI * Radius * Radius
    
    return Area      
    
        
def main():
    value = int(input("Enter the radius of Circle: "))
           
    Ret = Area(value)  
    
    print(f"Area of Circle is: {Ret} Sqm")    
              
    
if __name__ == "__main__":
    main()