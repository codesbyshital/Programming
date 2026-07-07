#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  GradeDisplay
#        
# Description:     Assignment_13: Q.4: Write a program which accepts Marks & Display grade. 
#                                      >=75 : Distinction, >=60 : First class, >=50 : Second Class, <50 : Fail                                  
#                                     
# Date:            30/05/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def GradeDisplay(Marks):
    
    if(Marks >= 75):
        print("Grade is: Distinction") 
    elif(Marks >= 60):
        print("Grade is: First Class") 
    elif(Marks >= 50):
        print("Grade is: Second Class")
    else:
        print("Grade is: Fail !!")          
    
        
def main():
    value = int(input("Enter the Marks: "))    
        
    GradeDisplay(value)        
              
    
if __name__ == "__main__":
    main()