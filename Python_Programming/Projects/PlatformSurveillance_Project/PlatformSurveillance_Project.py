#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Project Title : Automated Platform Surveillance System
# Description: It performs below operations:
#              1. System Monitoring
#              2. Process Management
#              3. Automation using Scheduling
#              4. Log File Creation
#              5. Resource Usage Tracking (CPU, RAM, Disk, Network)
#              6. Practical Use of psutil Library
#              7. Writing production style utility tools.
#              8. Sending log files through email periodically.
#
# Date:            27/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Modules Used :
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import psutil                   #provides System & Process information
import sys                      #used for Command line Arguments
import os                       #used for system operations
import schedule                 #schedule a function periodically
import time                     # Time formatting
import smtplib                  # for 
import configparser
from email.message import EmailMessage


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function : ProcessScan : It scans process & collects Pre-process details like cpu_percent. And generates the list 
#            of Dictionaries as information about each running processes.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


def ProcessScan():
    listprocess = []                    # list of Dictionaries
    
    for proc in psutil.process_iter():
        info = proc.as_dict(attrs=["pid","name","username","status"])
        info["cpu_percent"] = proc.cpu_percent(None)
        info["memory_percent"] = proc.memory_percent()
        
        listprocess.append(info)
        
    return listprocess              # returns list of dictionary  : process end time, start time



#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function : SendEmail : Send an email of Log file created at that timestamp as attachment.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def SendEmail(sender,app_password,receiver,subject,body,attachment_path):  
    
    #create email object
    msg = EmailMessage()   
    
    # Set mail headers
    msg["From"] = sender
    msg["To"] = receiver
    msg["Subject"] = subject
    
    # Add mail body
    msg.set_content(body)
   
    
    # Attch Log file
    try:
        with open(attachment_path, "rb") as f:
            file_data = f.read()
            file_name = os.path.basename(attachment_path)
            
        msg.add_attachment(file_data,
                           maintype="application",
                           subtype="octet-stream",
                           filename=file_name)

    except FileNotFoundError:
        print("Attachment file not found.")
        return    
    
    
    # send the email    
    try:
        smtp = smtplib.SMTP_SSL("smtp.gmail.com", 465)
        smtp.login(sender,app_password)
        #print("Login Success")

        smtp.send_message(msg)
        smtp.quit()


    except Exception as e:
        print("Unable to send email.\n\n")
        print(e)
    
    
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function : PlatformServillience : Logfile creation, System report Generation in Log file.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
        
    #writing into log file
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

    # Process Log  : list of dictionary  : add count of process
    Data = ProcessScan()
    
    for info in Data :
        #fobj.write(f"{info}\n")                    
        
        fobj.write("PID : %s\n" %info.get("pid"))
        fobj.write("Name : %s\n" %info.get("name"))
        fobj.write("PID : %s\n" %info.get("pid"))
        fobj.write("UserName : %s\n" %info.get("username"))
        fobj.write("Status : %s\n" %info.get("status"))
        fobj.write("CPU Usage : %.4f\n" %info.get("cpu_percent"))
        fobj.write("RAM (memory) Usage : %.4f\n" %info.get("memory_percent"))
        
        fobj.write(Border+"\n")
        
        fobj.write("\n\n")
        
        fobj.write(Border+"\n")
        fobj.write("------------------- End of Log File-------------------------------\n")
        fobj.write(Border+"\n")
     
        
    #----------------Email Sending-------------------------------------
    print(Border+"\n")
    print("----------------Email Sending----------------------------------------------\n")
    
    config = configparser.ConfigParser()
    config.read("config.ini")

    #Email ID & App password generated from google account
    sender_email = config["EMAIL"]["sender"]
    app_password = config["EMAIL"]["password"]
    
    app_password = app_password.strip() 
    
    
    # Receiver email testing
    receiver_email = config["EMAIL"]["receiver"]
    
    subject = "Test Mail from Python Script"
    
    body = """Jay Ganesh,
    This is the email sent using Platform Survilliance System.
    This contains the Log file of the System Servilliance.
    
    
    Thanks & Regards,
    Shital Nikam
        
    """
    
    # Attachment as Logfile generated at that time
    attachment = FileName    
    
    #Call to sendEmail function
    SendEmail(sender_email,app_password,receiver_email,subject,body,attachment)
    print("Log file Email sent Successfully\n")
            
    
    fobj.close()       
        
        
    
        
        
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function : main : Program Entry point function.It handles CLI options & starts scheduling. 
#                   Takes Input through command Line arguments.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
               
        print("Scheduler Started Successfully")
        print("Press Ctrl + c to abort the Automation script")
        #schedule.every(int(sys.argv[1])).minutes.do(PlatformServillience,sys.argv[2])
        
        schedule.every(int(sys.argv[1])).seconds.do(PlatformServillience,sys.argv[2])
        
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