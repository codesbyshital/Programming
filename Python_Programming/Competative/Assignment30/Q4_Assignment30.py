#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_30: Q.4: Create a task that executes every dat at 9:00 AM & prints: Namskar..                    
#                                     
# Date:            21/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import datetime

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: Display: displays message every day at 9:00 AM.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Display():                                          # call back function , task logic
    print("Namskar...")
    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border) 
    
    schedule.every().day.at("09:00").do(Display)               #call Display method.
    
    while True:
        schedule.run_pending()          # will check pending tasks explicitely if missed any tasks
        time.sleep(10)                   # PVM will sleep for 10 sec in between.
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()