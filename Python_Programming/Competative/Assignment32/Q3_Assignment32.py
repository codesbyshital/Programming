#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_32: Q.3: Write a program that reads & display content of specified text file every minute.
#                                  Handle following conditions : 
#                                  File doesnot exists, File is Empty, permission is denied, File cannot be opened. 
#
# Date:            22/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import schedule
import time
import os
import datetime

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name: ReadFile: Reads the file content & display on screen.
#                
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
def ReadFile(FileName):   
    Border = "-"*70     

    # Check whether file exists
    if not os.path.exists(FileName):
        print("Error: File does not exist.")
        return   
        
    try:        
        print(Border)
        print("Reading File:", FileName)
        print(Border)           
       
        fobj = open(FileName,"r")                           
                
        Data = fobj.read()          # Read the file

        # Check whether file Empty:
        if len(Data) == 0:
             print("File is Empty..")
             return
        
        #Display Contents of file
        print(Border)
        print("File Content is :")
        print(Data)
        
        fobj.close()                       
                    
        
        print(Border)
        print(f"File read at: {datetime.datetime.now()} \n")    # msg with current date time.
        print(Border)         
                
    except PermissionError :
            print("Error : Permission Denied, Unable to read file.")

    except OSError:
        print("Error: File cannot be opened.")

    except Exception as e:
        print("Error:", e)
             
    
def main():
    Border = "-"*60
    print(Border) 
    print(" Marvellous Automation Script ")
    print(Border) 
    
    FileName = input("Enter File name : ") 
    
    schedule.every(20).seconds.do(ReadFile,FileName)
    #schedule.every(1).minute.do(ReadFile,FileName)      
    
    print("File monitoring started...")
    print("Press Ctrl + C to stop the program.")
    
    while True:        
        schedule.run_pending()                      # will check pending tasks explicitely if missed any tasks
               
        time.sleep(1)                               # PVM will sleep for 1 sec in between.                                         
           
            
    print(Border) 
    print(" Thank you for using Marvellous Automation Script ")
    print(Border) 
        
    
if __name__ == "__main__":
    main()