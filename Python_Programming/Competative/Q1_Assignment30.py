#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_30: Q.1: write a program which prints "Jay Ganesh..." every 2 seconds.                    
#                                     
# Date:            20/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: Display: Print Jay Ganesh for every 2 seconds on screen.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def Display():                                          # call back function , task logic
    print("Jay Ganesh...")
    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border) 
    
    schedule.every(2).seconds.do(Display)               #call Display method.
    
    while True:
        schedule.run_pending()          # will check pending tasks explicitely if missed any tasks
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()