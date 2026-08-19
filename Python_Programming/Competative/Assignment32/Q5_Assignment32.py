#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_32: Q.5: Write a program that deletes all empty files from specified directory every hour. 
#                                  The program should : 
#                                  1. Scan the directory recursively.
#                                  2. Detect files whose size is zero bytes.
#                                  3. Delete the empty files
#                                  4. Store deleted file path in log file.
#                                  5. Handle Permission Errors. 
#
# Date:            22/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import os

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: DirectoryScanner:Deletes all empty files periodically and Store deleted file log.       
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
        print("Automation Error : There is no such Directory with Name ",DirectoryPath)
        return
        
    Ret = os.path.isdir(DirectoryPath)          # checking if Diretory exist?
    if(Ret == False):
        print("Automation Error : It is a not a Directory with name",DirectoryPath)
        return
    
    print("Log File gets created with Name is: ",LogFileName)
        
    try:       
        fobj = open(LogFileName,"w")            # log file creation
        
        fobj.write(Border+"\n")   
        
        fobj.write("Marvellous Automation Script : Directory Cleaning  \n\n")    
        fobj.write(Border+"\n")
        
        fobj.write("Files from the Directory are : \n\n")
        fobj.write(Border+"\n")
        
        TotalFiles = 0
        EmptyFiles = 0
        
        for FolderName, SubFolder, FileName in os.walk(DirectoryPath):
            for fname in FileName:
                TotalFiles = TotalFiles + 1         # ++  counting total files
                
                fname = os.path.join(FolderName,fname)   #giving path
                
                #fobj.write(f"{fname} : {os.path.getsize(fname)} bytes \n")         # writing the filenames list into log file
                
                            
                if(os.path.getsize(fname) == 0):
                    fobj.write(f"Deleted file path : {fname} : with size :{os.path.getsize(fname)} bytes \n") 
                    EmptyFiles = EmptyFiles + 1             # ++  counting empty files
                    os.remove(fname)
        
        fobj.write(Border+"\n")             # statistic display
        fobj.write(f"Total Files Scanned : {TotalFiles}\n")
        fobj.write(f"Total Empty Files found & deleted : {EmptyFiles}\n\n") 
                
        
        fobj.write(Border+"\n")             #footer
        fobj.write("Log file gets created at :"+timestamp)        
        fobj.write("\n"+Border+"\n")
        
        fobj.close()  

    except PermissionError :
        print("Error : Permission Denied while accessing directory.")
    
    except OSError:
        print("Error: Unable to access Directory.")

    except Exception as e:
        print("Unexpected Error:", e)      


########################################################################################################
#
# Function Name :           main
# Description :             It controls the script
# Date        :             22/07/2026
# Author :                  Shital Ajit Nikam
#
########################################################################################################

def main():
    Border = "-"*70
    print(Border)
    print("Starting Empty file Deletion operation....")
    print(Border)   
    
    DirectoryPath = input("Enter Directory name : ")
    
    # Validate directory before starting scheduler
    if not os.path.isdir(DirectoryPath):
        print("Invalid directory.")
        return

    print("\nScheduler started successfully.")
    print("Empty files will be deleted every Hour.")
    print("Press Ctrl + C to stop the program.")

    schedule.every(20).seconds.do(DirectoryScanner,DirectoryPath)
    #schedule.every(1).hour.do(DirectoryScanner,DirectoryPath)        
   
    
    while True:        
        schedule.run_pending()                      # will check pending tasks explicitely if missed any tasks
                
        time.sleep(1)                               # PVM will sleep for 1 sec in between.                                         
            
            
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