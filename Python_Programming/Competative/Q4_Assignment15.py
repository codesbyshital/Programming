#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Addition
#        
# Description:     Assignment_15: Q.4: Write a lambda function using reduce() which accepts list of numbers & returns 
#                                      Addition of all elements.
# Input  :         [2,3,4,5,6]
# Output :         20                               
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

from functools import reduce

Addition = lambda No1,No2: No1 + No2

def main():
    Data = [2,3,4,5,6]
    print("Input Data is :",Data)     
    
    RData = reduce(Addition, Data)              # Reduce internally calls addition & apply it on Data
    print("Addition of all Elements is: ",RData)    
    
if __name__ == "__main__":
    main()