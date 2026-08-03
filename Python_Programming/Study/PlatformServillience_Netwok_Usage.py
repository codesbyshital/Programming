# LogFile generation, CPU_usage, RAM_Usage , Network Usage

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
    Border = "-"*70
    
    timestamp = time.strftime("%Y-%m-%d_%H-%M-%S")
    
    FileName = os.path.join(FolderName,"Marvellous_%s.log" %timestamp)
    
    fobj = open(FileName,"w")
    
    print(f"Log file gets successfully created with name {FileName}")
        
    
    fobj.write(Border+"\n")
    print("---------Marvellous Platform Servillience System---------------------\n")
    fobj.write("Log file created at :"+timestamp+"\n")
    fobj.write(Border+"\n\n")
    
    fobj.write("-----------------------System Report-----------------------------\n")
    
    #CPU Information
    fobj.write("Number of Active CPU Cores : %s\n" %psutil.cpu_count())    
    fobj.write("CPU Usage : %s %%\n" %psutil.cpu_percent())
    fobj.write(Border+"\n\n")
    
    # RAM Information
    memory = psutil.virtual_memory()                #space on RAM (virtual)
    
    fobj.write("RAM Usage : %s %%\n" %memory.percent)           # given memory space usage in %
    fobj.write("Total RAM available : %s\n" %memory.total)           # total %
    fobj.write(Border+"\n\n")
    
    # Network Usage
    netobj = psutil.net_io_counters()
    
    fobj.write("Network Usage Report\n")
    fobj.write("Sent : %.2f MB\n" %(netobj.bytes_sent / (1024 * 1024)))
    fobj.write("Receive : %.2f MB\n" %(netobj.bytes_recv / (1024 * 1024)))
    fobj.write(Border+"\n\n")

    
    fobj.write("\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
    
    fobj.write(Border+"\n")
    fobj.write("------------------- End of Log File-------------------------------\n")
    fobj.write(Border+"\n")
    
    fobj.close()      
        

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
        
        #print("CPU Usage :",psutil.cpu_percent())           #cpu usage %
        
        print("Scheduler Started Successfully")
        print("Press Ctrl + c to abort the Automation script")
        schedule.every(int(sys.argv[1])).minutes.do(PlatformServillience,sys.argv[2])
        
        while True :                
            schedule.run_pending()
            time.sleep(1)
            
            # add for schedule for 10 times run: instead of Ctrl+c: it will end with footer : # if counter < 10
        
    
    else :          # invalid arguments error
        print("Invalid Number of Arguments\n")
        print("Unable to proceed as argument are not matching\n")
        print("Please use --h or --u flag for getting more details\n")
     
    
    
    print(Border)
    print("Thank you for using Marvellous Platform Servillience System")    
    print(Border)
    
    
if __name__ == "__main__":
    main()