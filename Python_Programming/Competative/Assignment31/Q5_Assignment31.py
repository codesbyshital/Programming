#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_31: Q.5: Write a program that accept Directory Name from user and counts number of files
#                                  inside it every 5 minutes. Write result into DirectoryCountLog.txt
#                                 
# Ex Output : 
# DirectoryCountLog.txt
# Directory Path:
# Number of Files:
# Date and Time.        
#
# Date:            21/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import os
import datetime

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: DirectoryCount: counts number of files in the Directory
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
def DirectoryCount(DirectoryPath):
    Border = "-"*70
    
    try:
        if not os.path.isdir(DirectoryPath):
            print("Invalid Directory")
            return
            
        # Current date and time                       
        timestamp = time.ctime() 
        
        # New backup file name with current timestamp
        #LogFileName = open("DirectoryCountLog.txt","w")
        
        FileCount = 0

        # writing data into log file...
        for FolderName, SubFolder, FileName in os.walk(DirectoryPath):        
                    
            for fname in FileName:
                FileCount = FileCount + 1   
                
        # Display on console
        print("Directory :", DirectoryPath)
        print("Number of Files :", FileCount)        
            
         # write into log file
        with open("DirectoryCountLog.txt","a") as LogFile: 
            LogFile.write("-------------------------------------------------------------------\n")       
            LogFile.write(" Marvellous Automation Directory Count Log  \n")    
            LogFile.write("-------------------------------------------------------------------\n")       
            LogFile.write(f"Directory Path : {DirectoryPath} \n") 
            LogFile.write(f"Number of Files : {FileCount} \n")              
            LogFile.write(f"Date and Time of Scanning :{timestamp} \n")          
        
        
    except Exception as e:
        print("Error :", e)
    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border)     
    
    DirectoryPath = input("Enter Directory path: ")                          #accept source path    
      
    #schedule.every(1).hour.do(DirectoryCount,DirectoryPath)                # schedule back up for every 1 hr.
    schedule.every(5).seconds.do(DirectoryCount,DirectoryPath)
    print("Directory scanning started")
    
    while True:        
        schedule.run_pending()                         # will check pending tasks explicitely if missed any tasks
               
        time.sleep(2)                   
       #time.sleep(60)                                      # PVM will sleep for 60 sec = 1 min in between.       
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()