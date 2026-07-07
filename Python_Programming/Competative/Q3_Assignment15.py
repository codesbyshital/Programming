#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  CheckOdd
#        
# Description:     Assignment_15: Q.3: Write a lambda function using filter() which accepts list of numbers & returns 
#                                      list of Odd numbers.
# Input  :         [2,3,4,5,6]
# Output :         [3,5]                               
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CheckOdd = lambda No: (No % 2 != 0)

def main():
    Data = [2,3,4,5,6]
    print("Input Data is :",Data)     
    
    FData = list(filter(CheckOdd, Data))             # Filter internally calls ChkOdd & apply it on Data
    print("Data after filter: ",FData)    
    
if __name__ == "__main__":
    main()