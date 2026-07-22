#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_31: Q.2: Write a program that display message And schedule function using 
#                                   schedule.every(5).seconds.do(DisplayMessage,Message) 
# Input : 
# Message : Jay Ganesh                                
#
# Date:            21/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import datetime

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: DisplayMessage: Schedule Message for evry 5.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def DisplayMessage(Msg):     
    
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
    
    # schedule message for specified time interval.
    schedule.every(5).seconds.do(DisplayMessage,Message)
    
    while True:        
        schedule.run_pending()                         # will check pending tasks explicitely if missed any tasks
               
        time.sleep(1)                                  # PVM will sleep for 1 sec in between.                                         
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()