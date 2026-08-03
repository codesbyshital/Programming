# LogFile generation

import psutil
import sys
import os
import schedule
import time



def PlatformServillience(FolderName):
    Border = "-"*70
    Ret = False
    
    Ret = os.path.exists(FolderName)            # checking if foldername exists
    
    if (Ret == True):
        Ret = os.path.isdir(FolderName)             # checking is directory
        if (Ret == False):
            print("Unable to proceed as Directory Name is existing but its not a Directory")
            return
                        
    else:
        os.mkdir(FolderName)
        print("Directory created for log file successfully..\n")
   
    #-------Folder is available     -----------------------
    
    timestamp = time.strftime("%Y-%m-%d_%H-%M-%S")
    
    FileName = os.path.join(FolderName,"Marvellous_%s.log" %timestamp)
    
    fobj = open(FileName,"w")
        
    print(f"Log file gets successfully created with name {FileName}")
        

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
        #PlatformServillience(sys.argv[2])
        schedule.every(int(sys.argv[1])).minutes.do(PlatformServillience,sys.argv[2])
        
        while True :
            schedule.run_pending()
            time.sleep(1)
        
    
    else :          # invalis arguments error
        print("Invalid Number of Arguments\n")
        print("Unable to proceed as argument are not matching\n")
        print("Please use --h or --u flag for getting more details\n")
     
    
    
    print(Border)
    print("Thank you for using Marvellous Platform Servillience System")    
    print(Border)
    
    
if __name__ == "__main__":
    main()