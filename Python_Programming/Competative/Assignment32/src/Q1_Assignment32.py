#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_32: Q.1: Write a program that creates a new text file every minute. file name should 
#                                  contains current timestamp. 
#                                  Write following information into file:
#                                  Filename, Creation date, Creation time.    
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
# Function Name: LogFile: 
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
def LogFile():         
    
    try:   
        Border = "-"*70     
        
        timestamp = time.ctime()
        LogFileName ="File_" + timestamp + ".txt"             #appending timestamp string    
        LogFileName = LogFileName.replace(" ","_")              # space replaced with _
        LogFileName = LogFileName.replace(":","_")              # : replaced with _
                    
        print("Log File gets created with Name is: ",LogFileName)
        
        Current = datetime.datetime.now()

        Date = Current.strftime("%d-%m-%Y")
        Time = Current.strftime("%H:%M:%S")    
            
        fobj = open(LogFileName,"w")            # log file creation        

        # writing data into log file...     
        with open(LogFileName, "w") as fobj:         
       
            fobj.write("-------------------------------------------------------------------------------")
            fobj.write("Marvellous Automation Script \n")
            fobj.write("-------------------------------------------------------------------------------")
            fobj.write("File name is : "+LogFileName+"\n")  
            fobj.write("Creation Date : "+Date+"\n")                 
            fobj.write("Creation Time : "+Time+"\n")                   
        
        print(Border)
        print(f"File cretaed at: {datetime.datetime.now()} \n")    # msg with current date time.
        print(Border)         
                
    except FileNotFoundError :
            print("Unable to open file, file does not exist.")
             
    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border)    
    
    schedule.every(1).minute.do(LogFile)    
    
    
    while True:        
        schedule.run_pending()                         # will check pending tasks explicitely if missed any tasks
               
        time.sleep(2)                               # PVM will sleep for 2 sec  in between.                                         
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()