# checking number of arguments for running process. 

# Basic decoration of automation script template

import sys

def main():
    Border = "-"*40
    print(Border)
    print(" Marvellous Automation Script ")
    print(Border)
        
    if(len(sys.argv) == 2):
        if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
            print("This Automation script is used to Travel the Directory")
            print("For better usage please check --u flag")
        elif(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
            print("Please execute the script as :")
            print("Python FileName.py DirectoryName")
            print("Directory Name should be Absolute path")
        else:
            DirectoryName = sys.argv[1]
            print("Directory name is: ",DirectoryName)        
                
    else :        
        print("Invalid number of arguments")
        print("Please use --h  / --u for more information")
        
    print(Border)
    print(" Thank you for using Marvellous Automation Script ")
    print(Border)
        

if __name__ == "__main__":
    main()
    