#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_32: Q.2: Write a program that monitors size of a specified file every 30 seconds. 
#                                  Write following details into : FileSizeLog.txt
#                                  File path, File size in bytes,Date & time. Handle situation where file doesnot exists.
#
# Date:            22/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import os
import datetime

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: GetDirectorySize: Calclulate directory size.
#                MonitorDirectory: Monitor the directory & write File path, File size in bytes,Date & time in log file. 
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  

def GetDirectorySize(DirName):

    TotalSize = 0   
    

    for FolderName, SubFolders, FileNames in os.walk(DirName):
        
        print("Folder :", FolderName)
        
        for File in FileNames:

            Path = os.path.join(FolderName, File)

            TotalSize += os.path.getsize(Path)

    return TotalSize

    
def MonitorDirectory(DirName):   
    Border = "-"*70     
    
    try:        
        
        Size = GetDirectorySize(DirName)        
        
        Current = datetime.datetime.now()

        Date = Current.strftime("%d-%m-%Y")
        Time = Current.strftime("%H:%M:%S") 
        
        DirName = os.getcwd()

        with open("FileSizeLog.txt", "a") as LogFile:

            LogFile.write(Border + "\n")           
            LogFile.write("Directory Path : " + os.path.abspath(DirName) + "\n")
            LogFile.write("Size : " + str(Size) + " Bytes\n")
            LogFile.write("Date : " + Date + "Time :" + Time +"\n")            
            LogFile.write(Border + "\n")                  
                    
        
        print(Border)
        print(f"Directory Monitored at: {datetime.datetime.now()} \n")    # msg with current date time.
        print(Border)         
                
    except FileNotFoundError :
            print("Unable to open file, file does not exist.")
             
    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border) 
    
    DirName = input("Enter directory name : ") 
    
    schedule.every(2).seconds.do(MonitorDirectory,DirName)
    #schedule.every(30).seconds.do(MonitorDirectory,DirName)      
    
    
    while True:        
        schedule.run_pending()                         # will check pending tasks explicitely if missed any tasks
               
        time.sleep(1)                               # PVM will sleep for 1 sec in between.                                         
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()