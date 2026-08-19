#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_31: Q.6: Write a program that schedule the following messages:
#                                  1. Monday at 9:00 AM: Start your weekly goals
#                                  2. Wednesday at 5:00 PM: Review your weekly progress.
#                                  3. Friday at 6:00 PM: Weekly report completed.     
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
# Function Name: WeeklyGoal: print message :Start your Weekly Goals..
# Function Name: WeeklyProgress: print message :Reveiew your Weekly progress..
# Function Name: WorkCompleted: print message :Weekly work completed!
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
def WeeklyGoal():     
    
    Border = "-"*60                                    
    print(Border)
    print("Start your Weekly Goals..")
    print(Border)
    
def WeeklyProgress():     
    
    Border = "-"*60                                    
    print(Border)
    print("Reveiew your Weekly progress..")
    print(Border)
   
def WorkCompleted():     
    
    Border = "-"*60                                    
    print(Border)
    print("Weekly work completed!")
    print(Border) 
   
    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border)    
    
    schedule.every().monday.at("09:00").do(WeeklyGoal)
    schedule.every().wednesday.at("17:00").do(WeeklyProgress)
    schedule.every().friday.at("18:00").do(WorkCompleted)
    
    
    while True:        
        schedule.run_pending()                         # will check pending tasks explicitely if missed any tasks
               
        time.sleep(3600)                               # PVM will sleep for 3600 sec = 1 hr in between.                                         
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()