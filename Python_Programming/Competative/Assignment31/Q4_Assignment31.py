#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_31: Q.4: Write a program that creates new log file after every 10 min. File anme should
#                                  contains current date & time.
#                                  
# Ex Output : 
# MarvellousLog_22_07_2026_16_30_00.txt
# file should contains:
# Log file created successfully.
# Creation Time : 22-07-2026 04:30:00 PM                          
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
# Function Name: LogFile: Scans the Directory path for every 1 minute.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
def LogFile():
    Border = "-"*70
        
    # Get file name and extension
    FileName = "MarvellousLog.txt"
    Name, Extension = os.path.splitext(FileName)            #split the text

    # Current date and time                       
    CurrentTime = time.ctime() 
    CurrentTime = CurrentTime.replace(" ","_")              #replace spaces with _
    CurrentTime = CurrentTime.replace(":","_")              #replace : with _

    # New backup file name with current timestamp
    LogFileName = f"{Name}_{CurrentTime}{Extension}"
    

    # writing data into log file...
    
    with open(LogFileName,"w") as LogFile:
            LogFile.write(Border + "\n")       
            LogFile.write(" Marvellous Automation Log file  \n")
            LogFile.write(Border + "\n")   
            LogFile.write("Log File created successfully. \n")
            LogFile.write("Creation Time : "+ str(datetime.datetime.now()) + "\n")
            LogFile.write(Border + "\n")   
            
    print("Log file created :", LogFileName)        
        
    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border)     
    
    
    # schedule task for every 10 minute of time interval.
    schedule.every(10).minutes.do(LogFile)
    
    #schedule.every(2).seconds.do(LogFile)    
        
    while True:        
        schedule.run_pending()                         # will check pending tasks explicitely if missed any tasks
               
        time.sleep(2)                                  # PVM will sleep for 2 sec in between.                                         
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()