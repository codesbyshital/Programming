# checking number of arguments for running process. 

# python Atomation.py --H  : help ,  python Atomation.py --U  : usage  , 
# python Atomation.py Marvellous , python Atomation.py --d

import sys

def main():
        
    if(len(sys.argv) == 2):
        if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
            print("Help")
        elif(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
            print("Usage")
        else:
            DirectoryName = sys.argv[1]
            print("Directory name is: ",DirectoryName)        
                
    else :        
        print("Invalid number of arguments")
        print("Please use --h  / --u for more information")

if __name__ == "__main__":
    main()
    