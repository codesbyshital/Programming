# Directory scanner app:  generating log file   :  
# creation of log file, added validations before creating log file

# delete empty files from directory

import sys
import os
import time             # for ctime
import schedule

def DirectoryScanner(DirectoryPath = "Marvellous"):
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
    
    
    for FolderName, SubFolder, FileName in os.walk(DirectoryPath):
        for fname in FileName:
            fname = os.path.join(FolderName,fname)   #giving path
            
            fobj.write(fname+"\n")              # writing the filenames list into log file
            
            print(f"File Name {fname} : {os.path.getsize(fname)} bytes")          #priting sizes of file
            
            
    
    fobj.write(Border+"\n")             #footer
    fobj.write("Log file gets created at :"+timestamp)        
    fobj.write("\n"+Border+"\n")
    
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
                        
            #schedule.every(1).minute.do(DirectoryScanner,sys.argv[1])
            DirectoryScanner(sys.argv[1])
            
            #while True :
             #   schedule.run_pending()
              #  time.sleep(1)
            
            
    else :        
        print("Invalid number of arguments")
        print("Please use --h  / --u for more information")
        
    print(Border)
    print(" Thank you for using Marvellous Automation Script ")
    print(Border)
        

if __name__ == "__main__":
    main()
    