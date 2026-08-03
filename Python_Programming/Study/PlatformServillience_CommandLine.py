# Project : System Servillience :
# Tasks :
# take snapshot of RAM : Process information:
# threshold limit checking, like CCTV of system, CPU Usage : warning 
# uploading / downlaoding checks, speed 
# disk space & its usage.
# no of processes running, no of Threads, address space, state, (Zombie state : which is dead, but still on RAM & RAM doing accounting of )
# log file generation in seperate folder

# python ProcessServillience.py 2 MarvellousLog
# python ProcessServillience time_interval Folder_Name
#           0                       1           2
# len(sys.args) = 3

#python ProcessServillience.py  --h
#python ProcessServillience.py  --u
#           0                     1
#len(sys.argv)  = 2



import psutil
import sys
import os
import schedule

def main():
    Border = "-"*70
    print(Border)
    print("---------Marvellous Platform Servillience System-----------")
    print(Border)
    
    # --h  & --u handeling
    if(len(sys.argv) == 2):
        if(sys.argv[1] == "--h" or sys.argv[1] == "--H" ):
            print("This Automation script is used to perform")
            print("1 : It fetch the information of Running Processes")
            print("2 : It fetch information about the Primary Storage as RAM")
            print("3 : It fetch information about the Secondary Storage HDD")            
            print("4 : It fetch information about the Microprocessor")
            print("5 : It gets auto schedules periodically")
            print("6 : It Maintains all records into log file")
            print("7 : It sends the log files through email periodically")                         
            
            
        elif(sys.argv[1] == "--u" or sys.argv[1] == "--H"):
            print("Use the Automation script as :")
            print(f"pthon {sys.argv[0]} Time_Interval Folder_Name")
            print("Time_Interval : Time in Minutes for periodic execution")
            print("Folder_Name : Name of folder for the log file creation")            
            
            
        else:
            print("Unable to proceed as argument are not matching\n")
            print("Please use --h or --u flag for getting more details\n")
            
            
            
            
    # Actual project code
    elif(len(sys.argv) == 3):  
        pass
    
    else :          # invalis arguments error
        print("Invalid Number of Arguments\n")
        print("Unable to proceed as argument are not matching\n")
        print("Please use --h or --u flag for getting more details\n")
     
    
    
    print(Border)
    print("Thank you for using Marvellous Platform Servillience System")    
    print(Border)
    
    
if __name__ == "__main__":
    main()