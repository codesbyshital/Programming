#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Square
#        
# Description:     Assignment_15: Q.1: Write a lambda function using map() which accepts list of numbers & returns 
#                                      list of squares of each numbers.
# Input  :         [2,3,4,5,6]
# Output :         [4,9,16,25,36]                               
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Square = lambda No: No ** 2                     # Square logic


def main():
    Data = [2,3,4,5,6]
    print("Input Data is :",Data)     
    
    MData = list(map(Square, Data))             # map internally calls square & apply it on Data
    print("Data after Map: ",MData)    
    
if __name__ == "__main__":
    main()