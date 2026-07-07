#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  length      
# Description:     Assignment_15: Q.7: Write a lambda function using filter() which accepts list of strings & returns 
#                                      list of strings having length greater than 5.
# Input  :         ["Python", "Java", "C", "Programming", "AI", "Machine", "C++"]
# Output :         ['Python', 'Programming', 'Machine']                               
#                                     
# Date:            2/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


length = lambda Str: len(Str) > 5  

def main():
    Data = ["Python", "Java", "C", "Programming", "AI", "Machine", "C++"]
    print("Input Data is :",Data)     
    
    FData = list(filter(length, Data))           # filter internally calls length & apply it on Data
    print("Data After Redue: ",FData)    
    
if __name__ == "__main__":
    main()