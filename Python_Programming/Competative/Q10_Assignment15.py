#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Even      
# Description:     Assignment_15: Q.10: Write a lambda function using filter() which accepts list of numbers & returns 
#                                      count of even numbers.
# Input  :         [2,3,4,5,6]
# Output :          3                            
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

from functools import reduce

Even = lambda No: No % 2 == 0

def main():
    Data = [2,3,4,5,6]
    print("Input Data is :",Data)     
    
    FData = list(filter(Even, Data))                 # filter internally calls Even & apply it on Data
    RData = len(FData)
    print("Count of Even nnumbers : ",RData)    
    
if __name__ == "__main__":
    main()