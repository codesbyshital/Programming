#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_31: Q.3: Write a program that scans a specified directory every minute. 
#                                  Task shouls display:
#                                  Directory Name, Number of files, number of subdirectories ,Date & time of 
#                                  Scanning. Use OS module.
# Ex Output : 
# Directory Scanned : E:/Data
# Total Files : 15
# Total Subdirectories : 4
# Scan Time : 21-07-2026  04:30:00 PM                            
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
# Function Name: DirectoryScanner: Scans the Directory path for every 1 minute.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
def DirectoryScanner(DirectoryPath):
    Border = "-"*70
    timestamp = time.ctime()    
   
    Ret = False    
    Ret = os.path.exists(DirectoryPath)         # if directory name exists.
    
    if(Ret == False) :                   # filter
        print("Marvellous Automation Error : There is no such Directory with Name ",DirectoryPath)
        return
        
    Ret = os.path.isdir(DirectoryPath)          # checking if Diretory exist?
    if(Ret == False):
        print("Marvellous Automation Error : It is not a Directory with name",DirectoryPath)
        return
    
    FileCount = 0
    DirectoryCount = 0
   
    print(Border)
    print("Files from the Directory are: ")
    
    for FolderName, SubFolder, FileName in os.walk(DirectoryPath):        
        for sfolder in SubFolder:
            DirectoryCount = DirectoryCount + 1
            
        for fname in FileName:
            FileCount = FileCount + 1           
            
            
    print("Directory Name : ",DirectoryPath) 
    print("Number of Files : ",FileCount)
    print("Number of Subdirectories : ",DirectoryCount)
           
    print("Date and Time of Scanning :"+timestamp)   
   
    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border)     
    
    Path = input("Enter the Path: ")                            # Accept the Message
    
    # schedule task for every 1 minute of time interval.
    schedule.every(1).minute.do(DirectoryScanner,Path)
    
    print("Directory scanning started...")
    
    while True:        
        schedule.run_pending()                         # will check pending tasks explicitely if missed any tasks
               
        time.sleep(2)                                  # PVM will sleep for 1 sec in between.                                         
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()