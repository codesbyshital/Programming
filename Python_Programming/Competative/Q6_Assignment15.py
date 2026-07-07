#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Minimum      
# Description:     Assignment_15: Q.6: Write a lambda function using reduce() which accepts list of numbers & returns 
#                                      Minimum element.
# Input  :         [12,33,4,25,9]
# Output :         4                               
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

from functools import reduce

Minimum = lambda No1,No2: No1 if(No1 < No2) else No2

def main():
    Data = [12,33,4,25,9]
    print("Input Data is :",Data)     
    
    RData = reduce(Minimum, Data)              # Reduce internally calls Minimum & apply it on Data
    print("Minimum number is: ",RData)    
    
if __name__ == "__main__":
    main()