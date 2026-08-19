#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_30: Q.5: Create a task that write current data & time into a file named : Marvellous.txt                    
#                                  New entries shoud appended without removing previous entries.  
# Output: 
# Task executed at: 21-07-2026 03:30:00 PM
# Task executed at: 21-07-2026 03:30:00 PM
#
# Date:            21/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import datetime

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: WriteFile: write message in file for every five Minutes.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def WriteFile():                                       # call back function , task logic   
    
    try:        
        fobj = open("Marvellous.txt","a")                  # Append Mode
        time = (str)(datetime.datetime.now())
        
        fobj.write("Task Executed at: "+time+" PM\n")
                
        
    except FileNotFoundError :
        print("Unable to open file, file does not exist.")                           

    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border)     
    
    schedule.every(1).minute.do(WriteFile)               # call Display method.
    print("Logging the Time....\n")
    
    while True:
        schedule.run_pending()          # will check pending tasks explicitely if missed any tasks
        time.sleep(2)                   # PVM will sleep for 2 sec in between.           
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()