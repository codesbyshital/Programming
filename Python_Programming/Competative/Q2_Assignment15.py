#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  CheckEven
#        
# Description:     Assignment_15: Q.2: Write a lambda function using filter() which accepts list of numbers & returns 
#                                      list of even numbers.
# Input  :         [2,3,4,5,6]
# Output :         [2,4,6]                               
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CheckEven = lambda No: (No % 2 == 0)

def main():
    Data = [2,3,4,5,6]
    print("Input Data is :",Data)     
    
    FData = list(filter(CheckEven, Data))              # Filter internally calls ChkEven & apply it on Data
    print("Data after filter: ",FData)    
    
if __name__ == "__main__":
    main()