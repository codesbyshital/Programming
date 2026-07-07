#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Maximum      
# Description:     Assignment_15: Q.5: Write a lambda function using reduce() which accepts list of numbers & returns 
#                                      Maximum element.
# Input  :         [12,33,4,25,9]
# Output :         33                            
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

from functools import reduce

Maximum = lambda No1,No2: No1 if(No1 > No2) else No2

def main():
    Data = [12,33,4,25,9]
    print("Input Data is :",Data)     
    
    RData = reduce(Maximum, Data)              # Reduce internally calls Maximum & apply it on Data
    print("Maximum number is: ",RData)    
    
if __name__ == "__main__":
    main()