#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Project Title : Automated Disk Sanitiser (Duplicate File Removal System)
# Description: It performs below operations:
#              1. File System Traversal.
#              2. Directory Scanning using os.walk()
#              3. File handeling in Binary mode.
#              4. Checksum Generation using MD5 hashing.
#              5. Duplicate File deletion Logic.
#              6. Disctionary based data organization.
#              7. Safe file deletion.
#              8. Disk space optimization.
#              9. Writing production style system utilities.
#
# Date:            27/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Modules Used :
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import sys                  #used for Command line Arguments
import os                   #used for system operations
import schedule             #schedule a function periodically
import time                 # Time formatting
import hashlib              # checksum calculations  : MD5

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function : CalculateChecksum : It takes filename  & retuns MD5 checksum.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


def CalculateChecksum(FileName):
    fobj = open(FileName,"rb")             #read mode in Binary format  : Binary IO   : we can pass executables: so we can handle any tyoe of file
    
    hobj = hashlib.md5()                   #md5 generation
    
    Buffer = fobj.read(1024)               #reading 1000 bytes at a time store in list Buffer
    
    while(len(Buffer) > 0):               # till empty buffer, 1 block : 1024 bytes : 1KB : HDD  for RAM : Page : 1KB : 1024 bytes
        hobj.update(Buffer)
        Buffer = fobj.read(1024)            # OS will give 1024 so no wastage 
        
    fobj.close()
    
    return hobj.hexdigest()                # checksum  : hex digest  : 32 Bytes    


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function : FindDuplicate : Finds Duplicate inside Directory. It compares the content & if found same return 
#                            dulicate directory & total files scanned.   
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        
def FindDuplicate(DirectoryName):
    Ret = False
    TotalFilesScanned = 0
    
    Ret = os.path.exists(DirectoryName)                      # is directory available    
    if Ret == False :
        print("Path is invalid")
        return
    
    Ret = os.path.isdir(DirectoryName)                       # it is not direcory
    if(Ret == False):
        print("It is not a directory")
        return {} , 0
    Duplicate = {}          # Empty Dictionary        
    
    
    for FolderName, SubFolder, FileName in os.walk(DirectoryName):
        for fname in FileName:
            fname = os.path.join(FolderName,fname)              # Relative path  like absulate path
            
            Checksum = CalculateChecksum(fname)                  # Calulate checksum runs N times (N = number of files)
            
            TotalFilesScanned = TotalFilesScanned + 1
            
            if Checksum in Duplicate:
                
                Duplicate[Checksum].append(fname)               #append the dictionary  : key value for second time
            else:
                
                Duplicate[Checksum] = [fname]                  #key value for first time
    return Duplicate, TotalFilesScanned                 # retuning dictionary of duplicate files & TotalfiesScannned         


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function : DeleteDuplicate : Deletes the Duplicate files inside directory. It gets checksum directory from 
#            FindDuplicate() 
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   
def DeleteDuplicate(DirectoryName):
    
    MyDict, TotalFilesScanned = FindDuplicate(DirectoryName)    
    
    StartTime = time.time()
    DuplicateCount = len(MyDict)    
    
    # give the values filter: fname  : file names 
    Result = list(filter(lambda x : len(x) > 1, MyDict.values())) 
    
    Count = 0                  #counting duplicate file
    TotalDeleted = 0           #total deleted files
    
        
    for value in Result:
        
        for subvalue in value:
            
            Count = Count + 1                   
            if(Count > 1):
                SpaceSaved += os.path.getsize(subvalue)
                os.remove(subvalue)                  # deletes duplicate
                TotalDeleted = TotalDeleted + 1              
                
        Count = 0                   # reset the count to 0 for next for loop 
        
    print("Total Deleted files are :",TotalDeleted)
    
    EndTime = time.time()
    ExecutionTime = round(EndTime - StartTime , 2)
    
    #-------Log Folder Creation-----------------------
    
    FolderName = "Logs"
    
    if not os.path.exists(FolderName):
        os.mkdir(FolderName)
    
    print("Directory created for log file successfully..\n")  
    
    SpaceSaved = 0  
    
    Border = "-"*70    
    timestamp = time.strftime("%Y-%m-%d_%H-%M-%S")
    
    FileName = os.path.join(FolderName,"Deletion_%s.log" %timestamp)
    
    fobj = open(FileName,"w")
    
    print(f"Log file gets successfully created with name {FileName} \n")
        
    #writing into log file
    fobj.write(Border+"\n")
    print("---------Automated Disk Sanitiser System Report-----------------\n")
    fobj.write("Log file created at :"+timestamp+"\n")
    fobj.write(Border+"\n\n")
    
    fobj.write(f"Directory              : {DirectoryName}\n")
    fobj.write(f"Date                   : {time.strftime('%d/%m/%Y')}\n")
    fobj.write(f"Time                   : {time.strftime('%H:%M:%S')}\n\n")

    fobj.write(f"Total Files Scanned    : {TotalFilesScanned}\n")
    fobj.write(f"Duplicate Files Found  : {DuplicateCount}\n")
    fobj.write(f"Total Files Deleted    : {TotalDeleted}\n")
    fobj.write(f"Disk Space Saved       : {SpaceSaved/(1024*1024):.2f} MB\n")
    fobj.write(f"Execution Time         : {ExecutionTime} Seconds\n")
    fobj.write(Border+"\n\n")
    
    fobj.close()
      

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function : main : Program Entry point function.It handles CLI options & starts scheduling. 
#                   Takes Input through command Line arguments.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
def main():
    Border = "-"*70
    print(Border)
    print("---------Automated Disk Sanitiser System-----------")
    print(Border)
    
    # --h  & --u handeling
    if(len(sys.argv) == 2):
        if(sys.argv[1] == "--h" or sys.argv[1] == "--H" ):
            print("This Automation script is used to perform")
            print("1 : Directory Scanning using os.walk()")
            print("2 : File handeling in Binary mode.")
            print("3 : Checksum Generation using MD5 hashing.")            
            print("4 : Duplicate File deletion Logic.")
            print("5 : It gets auto schedules periodically")
            print("6 : Disctionary based data organization.")
            print("7 : Safe file deletion.")    
            print("8 : Disk space optimization.")      
            print("9 : Writing production style system utilities.")               
          
            
        elif(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
            print("Use the Automation script as :")
            print(f"python {sys.argv[0]} Time_Interval Folder_Name")
            print("Time_Interval : Time in Minutes for periodic execution")
            print("Folder_Name : Name of directory for scanning")   
        
        else:
            print("Unable to proceed as argument are not matching\n")
            print("Please use --h or --u flag for getting more details\n")                   
            
            
    # Actual project code       : arguments = 3 : FileName.py 5 Test
    elif(len(sys.argv) == 3):                
        print("Scheduler Started Successfully\n\n")
        print("Press Ctrl + c to abort the Automation script")
        
        #schedule.every(int(sys.argv[1])).minutes.do(DeleteDuplicate,sys.argv[2])
        
        schedule.every(int(sys.argv[1])).seconds.do(DeleteDuplicate,sys.argv[2])
        
        while True :                
            schedule.run_pending()
            time.sleep(1)
                 
    
    else:
        print("Invalid Number of Arguments\n")
        print("Unable to proceed as argument are not matching\n")
        print("Please use --h or --u flag for getting more details\n")             
    
    
    print(Border)
    print("Thank you for using Automated Disk Sanitiser System...!")    
    print(Border)         
    
    
    
if __name__ == "__main__":
    main()   
    
