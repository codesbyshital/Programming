#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_30: Q.3: write a program that schedules a function to print: Coding Kar..! every 30 min.                    
#                                     
# Date:            21/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import datetime

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: Display: displays message after every 30 Minute.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Display():                                          # call back function , task logic
    print("Coding Kar..!")
    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border) 
    
    schedule.every(30).minutes.do(Display)               #call Display method.
    
    while True:
        schedule.run_pending()          # will check pending tasks explicitely if missed any tasks
        time.sleep(5)                   # PVM will sleep for 5 sec in between.
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()