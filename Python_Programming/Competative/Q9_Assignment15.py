#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Product      
# Description:     Assignment_15: Q.9: Write a lambda function using reduce() which accepts list of numbers & returns 
#                                      product of all elements.
# Input  :         [2,3,4,5,6]
# Output :          720                            
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

from functools import reduce

Product = lambda No1,No2: No1 * No2

def main():
    Data = [2,3,4,5,6]
    print("Input Data is :",Data)     
    
    RData = reduce(Product, Data)              # reduce internally calls Product & apply it on Data
    print("Data After Reduce: Product of all elements is : ",RData)    
    
if __name__ == "__main__":
    main()