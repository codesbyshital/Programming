#//////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name :  Table
#        
# Description:     Assignment_10: Q.1: Write a program which accept one number & prints multiplication table
#                  of that number.
# Input  :         5
# Output :         5 10 15 20 25 30 35 40 45 50 
#                                     
# Date:            30/06/2026
# Author:          Shital Ajit Nikam   
#
#//////////////////////////////////////////////////////////////////////////////////////////////////////////

def Table(No):
    i = 0               
    for i in range(1,11):
        Res = No * i
        print(f"{Res}",end="\t")        #prints result in sigle line with tab
    print("\n")
    
def main():
    value1 = int(input("Enter the number: "))
        
    Table(value1)   
     
    
if __name__ == "__main__":
    main()