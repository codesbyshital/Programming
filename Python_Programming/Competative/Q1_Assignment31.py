#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_31: Q.1: Write a program that accept message from user & time interval in seconds. And
#                                  schedule the program to display the message repeatedly after specified interval.  
# Input : 
# Message : Jay Ganesh
# Time Interval in seconds : 5                                 
#
# Date:            21/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import shutil
import datetime
import os

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: ScheduleMessage: Schedule Message for sepecified time interval.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def ScheduleMessage(Msg):     
    
    Border = "-"*60                                    
    
    try:        
        print(Border)
        print(f"Message is :{Msg} at: {datetime.datetime.now()} \n")    # msg with current date time.
        print(Border)                    
                        
    except Exception as e :
        print("Error : ",e)                           

    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border)     
    
    Message = input("Enter the Message: ")                            # Accept the Message
    TimeInterval = (int)(input("Enter Time interval: "))             # Accept the time interval as string & convert to time
    
    if (TimeInterval > 0) :           
        schedule.every(TimeInterval).seconds.do(ScheduleMessage,Message) # schedule message for specified time interval.
    
    else :
        print("Enter the valid time interval")
    
    while True:        
        schedule.run_pending()                         # will check pending tasks explicitely if missed any tasks
               
        time.sleep(1)                                  # PVM will sleep for 1 sec in between.                                         
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()