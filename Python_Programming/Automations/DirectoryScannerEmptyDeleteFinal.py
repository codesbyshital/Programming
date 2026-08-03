
########################################################################################################
#
# Importing Required Libraries
#
########################################################################################################
        

import sys
import os
import time             # for ctime
import schedule

########################################################################################################
#
# Function Name :           DirectoryScanner
# Input :                   Name of the Directory
# Description :             Directory scanner app: Deletes all empty files periodically
# Date        :             19/07/2026
# Author :                  Shital Ajit Nikam
#
########################################################################################################

def DirectoryScanner(DirectoryPath):
    Border = "-"*70
    timestamp = time.ctime()
    
    
    LogFileName ="Marvellous%s.log"%(timestamp)             #appending timestamp string    
    LogFileName = LogFileName.replace(" ","_")              # space replaced with _
    LogFileName = LogFileName.replace(":","_")              # : replaced with _
    
    # validations : filter
    Ret = False
    
    Ret = os.path.exists(DirectoryPath)         # if directory name exists.
    
    if(Ret == False) :                          # filter
        print("Marvellous Automation Error : There is no such Directory with Name ",DirectoryPath)
        return
        
    Ret = os.path.isdir(DirectoryPath)          # checking if Diretory exist?
    if(Ret == False):
        print("Marvellous Automation Error : It is a not a Directory with name",DirectoryPath)
        return
    
    print("Log File gets created with Name is: ",LogFileName)
        
           
    fobj = open(LogFileName,"w")            # log file creation
    
    fobj.write(Border+"\n")   
    
    fobj.write("Marvellous Automation Script \n\n")    
    fobj.write(Border+"\n")
    
    fobj.write("Files from the Directory are : \n\n")
    fobj.write(Border+"\n")
    
    TotalFiles = 0
    EmptyFiles = 0
    
    for FolderName, SubFolder, FileName in os.walk(DirectoryPath):
        for fname in FileName:
            TotalFiles = TotalFiles + 1         # ++  counting total files
            
            fname = os.path.join(FolderName,fname)   #giving path
            
            fobj.write(f"{fname} : {os.path.getsize(fname)} bytes \n")         # writing the filenames list into log file
            
                        
            if(os.path.getsize(fname) == 0):
                EmptyFiles = EmptyFiles + 1             # ++  counting empty files
                os.remove(fname)
    
    fobj.write(Border+"\n")             # statistic display
    fobj.write(f"Total Files Scanned : {TotalFiles}\n")
    fobj.write(f"Total Empty Files found & deleted : {EmptyFiles}\n\n") 
            
    
    fobj.write(Border+"\n")             #footer
    fobj.write("Log file gets created at :"+timestamp)        
    fobj.write("\n"+Border+"\n")
    
    fobj.close()        


########################################################################################################
#
# Function Name :           main
# Input :                   Command line Arguments
# Description :             It controls the script
# Date        :             19/07/2026
# Author :                  Shital Ajit Nikam
#
########################################################################################################

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
                        
            schedule.every(1).minute.do(DirectoryScanner,sys.argv[1])
            
            while True :
                schedule.run_pending()
                time.sleep(1)
            
            
    else :        
        print("Invalid number of arguments")
        print("Please use --h  / --u for more information")
        
    print(Border)
    print(" Thank you for using Marvellous Automation Script ")
    print(Border)

########################################################################################################
#
# Starter of the Automation Script
#
########################################################################################################
        

if __name__ == "__main__":
    main()
    