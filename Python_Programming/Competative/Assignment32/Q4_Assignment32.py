#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_32: Q.4: Write a program that copies all .txt files from one directory to another every 
#                                  10 minutes. program should : 
#                                  1. Accept source & destination directories.
#                                  2. Validate both directories.
#                                  3. copy only .txt files
#                                  4. Maintain log of all copied files
#                                  5. Avoid terminating if one file cannot be copied. 
#
# Date:            22/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import os
import datetime
import shutil

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: CopyDirectory: copy data from one file to another. Maintain log of all copied files                  
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def CopyDirectory(SrcDirName, DestDirName):
    Border = "-"*70 

    print(Border)
    print("Starting text File copy operation:")
    print(Border)   

    Ret = False
    #Validate Source Directory
    Ret = os.path.exists(SrcDirName)         # is it available    
    if Ret == False :
        print("Source Directory does not exist")
        return
    
    Ret = os.path.isdir(SrcDirName)          # is is not direcory
    if(Ret == False):
        print("Source path is not a directory")
        return

    #Validate Destination Directory
    Ret = os.path.exists(DestDirName)         # is it available    
    if Ret == False :
        print("Destination Directory does not exist")
        return
        
    Ret = os.path.isdir(DestDirName)          # is is not direcory
    if(Ret == False):
        print("Destination path is not a directory")
        return
    
    # create Log file :

    LogFileName = "CopyLog.txt"
    
    for FolderName, SubFolder, FileName in os.walk(SrcDirName):
        for fname in FileName:
            fname = os.path.join(FolderName,fname)              # Relative path  like absulate path            
 
    
    try:            
        # Get all files from source directory
       Files = os.listdir(SrcDirName)

       count = 0

       with open("FileSizeLog.txt", "a") as LogFile:
                   
            LogFile.write(Border + "\n")           
            LogFile.write("Text file copy Operation : " + "\n")
            LogFile.write("Date & Time : " + str(datetime.datetime.now()) + "\n")            
            LogFile.write(Border + "\n")         

            for FileName in Files :
                # Copy only .txt files
                if FileName.lower().endswith(".txt"):
                    SourcePath = os.path.join(SrcDirName, FileName)
                    DestinationPath = os.path.join(DestDirName,FileName)
                    

                # Make sure it is actually a file
                if not os.path.isfile(SourcePath):
                    continue

                try :
                    shutil.copy2(SourcePath,DestinationPath)

                    count = count + 1

                    print("Copied Successfully", FileName)

                    LogFile.write(
                            f"Copied : {SourcePath} --> "
                            f"{DestinationPath}\n"
                        )

                except Exception as e:

                    # Do not terminate if one file fails
                    print(f"Unable to copy {FileName} : {e}")

                    LogFile.write(f"FAILED : {SourcePath} : {e}\n")

            LogFile.write(f"Total files copied : {count}\n")
            LogFile.write(Border)

            print("Total files copied :", count)
        
        
    except PermissionError :
            print("Error : Permission Denied while accessing directory.")

    except OSError:
        print("Error: Unable to access Directory.")

    except Exception as e:
        print("Unexpected Error:", e)
             
    
def main():
    Border = "-"*70
    print(Border) 
    print(" Text File copy Automation Script ")
    print(Border) 
    
    SrcDirName = input("Enter Source Directory name : ")
    DestDirName = input("Enter Destination Directory name : ") 

    # Validate directories before starting scheduler
    if not os.path.isdir(SrcDirName):
        print("Invalid source directory.")
        return

    if not os.path.isdir(DestDirName):
        print("Invalid destination directory.")
        return

    print("\nScheduler started successfully.")
    print("Text files will be copied every 10 minutes.")
    print("Press Ctrl + C to stop the program.")

    schedule.every(20).seconds.do(CopyDirectory,SrcDirName,DestDirName)
    #schedule.every(10).minute.do(CopyDirectory,SrcDirName,DestDirName)      
   
   # Perform first copy immediately
    CopyDirectory(SrcDirName,DestDirName)
    
    while True:        
        schedule.run_pending()                      # will check pending tasks explicitely if missed any tasks
               
        time.sleep(1)                               # PVM will sleep for 1 sec in between.                                         
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()