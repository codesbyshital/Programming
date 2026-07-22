#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_30: Q.7: Write a python program that performs a file backup evry hour.
#                                  Program Should:  
#                                  1. Accept source file path.
#                                  2. Accept Destination directory path.
#                                  3. Copy source file to destination directory.
#                                  4. Add the current date & time to the backup filename.
#                                  5. Write the backup operation details into: backup_log.txt
#
# Date:            21/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import shutil
import datetime
import os

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: Backup: Check Source & destination paths, Copy source file into destinaion path.create backup log 
#                file with current date & time. And create backup_log.txt for backup operation details.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Backup(SourcePath,DestPath):     
    
    Border = "-"*60                                    
    
    try:        
        # Check if source file exists
        if not os.path.isfile(SourcePath):
            print("Source file does not exist.")
            return

        # Check if destination directory exists
        if not os.path.isdir(DestPath):
            print("Destination directory does not exist.")
            return
        
        # Get file name and extension
        FileName = os.path.basename(SourcePath)
        Name, Extension = os.path.splitext(FileName)            #split the text

        # Current date and time
        
        timestamp = time.ctime()                                #gives current timestamp
                        
        CurrentTime = timestamp
        CurrentTime = CurrentTime.replace(" ","_")              #replace spaces with _
        CurrentTime = CurrentTime.replace(":","_")              #replace : with _

        # New backup file name with current timestamp
        BackupFileName = f"{Name}_{CurrentTime}{Extension}"

        # create destination path for backup file.
        DestinationPath = os.path.join(DestPath, BackupFileName)

        # Copy file file to destination path
        shutil.copy2(SourcePath, DestinationPath)

        # Create log file            
                 
        with open("Backup_log.txt","a") as LogFile:
            LogFile.write("-------------------------------------------------------------------\n")       
            LogFile.write(" Marvellous Automation Backup Log  \n")    
            LogFile.write("-------------------------------------------------------------------\n")    
            LogFile.write(f"{datetime.datetime.now()} : \n{SourcePath} --> {DestinationPath}\n")     
                    
        print(f"Backup completed successfully at :{datetime.datetime.now()} PM\n")        
        
                
    except Exception as e :
        print("Error : ",e)                           

    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border)     
    
    Source = input("Enter source file path: ")                          #accept source path
    Destination = input("Enter destination directory path: ")           #accept destination path
      
    schedule.every(1).hour.do(Backup,Source,Destination)                # schedule back up for every 1 hr.
    #schedule.every(5).seconds.do(Backup,Source,Destination)
    
    while True:        
        schedule.run_pending()                         # will check pending tasks explicitely if missed any tasks
        print("Waiting for next backup....")
        
        #time.sleep(2)                   
        time.sleep(60)                                      # PVM will sleep for 60 sec = 1 min in between.       
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()