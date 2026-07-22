#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_30: Q.2: write a program that displays current date and Time after every Minute.                    
#                                     
# Date:            20/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import datetime

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: Display: displays current date and Time after every Minute.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Display():                                          # call back function , task logic
    print(datetime.datetime.now())
    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border) 
    
    schedule.every(1).minute.do(Display)               #call Display method.
    
    while True:
        schedule.run_pending()          # will check pending tasks explicitely if missed any tasks
        time.sleep(1)                   # PVM will sleep for 1 sec in between.
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()