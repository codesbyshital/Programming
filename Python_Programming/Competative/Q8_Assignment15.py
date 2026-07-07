#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Div      
# Description:     Assignment_15: Q.8: Write a lambda function using filter() which accepts list of numbers & returns 
#                                      list of numbers which are divisible by both 3 & 5.
# Input  :         [10,12,15,30,45]
# Output :         [15,30,45]                               
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


Div = lambda No: (No % 3 == 0) and (No % 5 == 0)  

def main():
    Data = [10,12,15,30,45]
    print("Input Data is :",Data)     
    
    FData = list(filter(Div, Data))           # filter internally calls Div & apply it on Data
    print("Data After Filter: Elements Divisible by 3 & 5 : ",FData)    
    
if __name__ == "__main__":
    main()