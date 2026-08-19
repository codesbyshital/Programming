#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_30: Q.6: Write a script that schedule following tasks:                    
#                                  Print Lunch Time! everyday at 1:00 PM
#                                  Print Wrap up work Every day at 6:00 PM 
#
# Date:            21/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import datetime

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: LunchTime: Display " Lunch Time!" message  
#                WrapUp : Display " Wrap up Work" message 
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def LunchTime():                                       
    print("Lunch Time!")
              

def WrapUp():                                         
    print("Wrap up Work..")
                            

    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border)     
    
    schedule.every().day.at("13:00").do(LunchTime)               # call LunchTime method
    schedule.every().day.at("18:00").do(WrapUp)                  # call Wrap up method
    
    while True:
        schedule.run_pending()          # will check pending tasks explicitely if missed any tasks
        time.sleep(5)                   # PVM will sleep for 5 sec in between.              
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()