# checking number of arguments for running process. 

# python Atomation.py --H  : help ,  python Atomation.py --U  : usage  , 
# python Atomation.py Marvellous , python Atomation.py --d

import sys

def main():
    print("-----------------------------------------------------------------------------")
    print(" Marvellous Automation Script ")
    print("-----------------------------------------------------------------------------")
        
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
        
    print("-----------------------------------------------------------------------------")
    print(" Thank you for using Marvellous Automation Script ")
    print("-----------------------------------------------------------------------------")
        

if __name__ == "__main__":
    main()
    