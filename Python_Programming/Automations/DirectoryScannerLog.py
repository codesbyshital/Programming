# Directory scanner app:  generating log file   : but replacing existing one, so need to append data / 
#

import sys
import os

def DirectoryScanner(DirectoryPath):    
           
    fobj = open("MarvellousLog.txt","w")            # log file creation
    
    # writing data into log file...
    fobj.write("Marvellous Automation Script \n")
    fobj.write("Files from the Directory are : \n")
    
    
    for FolderName, SubFolder, FileName in os.walk(DirectoryPath):
        for fname in FileName:
            fobj.write(fname+"\n")              # writing the filenames list into log file
            
            
    fobj.close()
        

def main():
    Border = "-"*60
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
            DirectoryScanner(sys.argv[1])
            
    else :        
        print("Invalid number of arguments")
        print("Please use --h  / --u for more information")
        
    print(Border)
    print(" Thank you for using Marvellous Automation Script ")
    print(Border)
        

if __name__ == "__main__":
    main()
    