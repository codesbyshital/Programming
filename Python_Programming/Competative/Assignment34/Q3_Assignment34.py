#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_34: Q.3: Design automation script which accept d irectory name from user & create log  
#                                  file in that directory which contains information of running processes as its name,
#                                  PID, Username.                            
#
# Date:            27/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#################################################################
# Program Name  : Q3_Assignment34.py
#
# Description   : Accepts directory name through command-line
#                 arguments and creates a log file containing
#                 information about running processes.
#
# Usage         : python Q3_Assignment34.py DirectoryName
#################################################################

import os
import sys
import time
import psutil


#################################################################
# Function Name : ValidateDirectory
# Description   : Validates the specified directory.
#################################################################

def ValidateDirectory(DirectoryName):

    if not os.path.exists(DirectoryName):

        print("Directory does not exist.")
        return False

    if not os.path.isdir(DirectoryName):

        print("Given path is not a directory.")
        return False

    return True


#################################################################
# Function Name : CreateLogFile
# Description   : Creates a timestamp-based log file.
#################################################################

def CreateLogFile(DirectoryName):

    try:

        Timestamp = time.strftime("%Y-%m-%d_%H-%M-%S")

        FileName = os.path.join(DirectoryName,f"ProcessInfo_{Timestamp}.log")

        fobj = open(FileName, "w")

        return fobj, FileName

    except PermissionError:

        print("Permission denied. Unable to create log file.")
        return None, None

    except OSError as e:

        print("Unable to create log file.")
        print("Error:", e)

        return None, None


#################################################################
# Function Name : ProcessScan
# Description   : Scans all running processes.
#################################################################

def ProcessScan():

    ListProcess = []

    try:

        for Process in psutil.process_iter(["pid", "name", "username", "status"]):  # list of dictionaries

            try:

                ProcessInfo = Process.info

                ListProcess.append(ProcessInfo)

            except psutil.NoSuchProcess:
                continue

            except psutil.AccessDenied:
                continue

            except psutil.ZombieProcess:
                continue

        return ListProcess

    except Exception as e:

        print("Unable to scan running processes.")
        print("Error:", e)

        return []


#################################################################
# Function Name : WriteProcessInfo
# Description   : Writes process information into log file.
#################################################################

def WriteProcessInfo(fobj):

    Border = "-" * 70

    Data = ProcessScan()

    fobj.write(Border + "\n")
    fobj.write("PROCESS INFORMATION REPORT\n")
    fobj.write(Border + "\n\n")

    fobj.write(f"Total Running Processes : {len(Data)}\n")

    fobj.write(f"Scan Date and Time      : " f"{time.strftime('%d-%m-%Y %H:%M:%S')}\n" )

    fobj.write(Border + "\n\n")

    for Info in Data:

        fobj.write(f"PID      : {Info.get('pid')}\n")

        fobj.write(f"Name     : {Info.get('name')}\n" )

        fobj.write( f"Username : {Info.get('username')}\n")

        fobj.write(f"Status   : {Info.get('status')}\n" )

        fobj.write(Border + "\n")

    fobj.write("\n")
    fobj.write(Border + "\n")
    fobj.write("END OF PROCESS INFORMATION REPORT\n")
    fobj.write(Border + "\n")


#################################################################
# Function Name : main
# Description   : Entry point of the application.
#################################################################

def main():

    Border = "-" * 70

    print(Border)
    print("PROCESS INFORMATION SYSTEM")
    print(Border)

    #############################################################
    # Validate Command-Line Arguments
    #############################################################

    if len(sys.argv) != 2:

        print("Invalid number of arguments.")
        print("Usage:")
        print(f'python {sys.argv[0]} "DirectoryName"')

        return

    #############################################################
    # Accept Directory Name
    #############################################################

    DirectoryName = sys.argv[1]

    #############################################################
    # Validate Directory
    #############################################################

    if not ValidateDirectory(DirectoryName):

        return

    #############################################################
    # Create Log File
    #############################################################

    fobj, FileName = CreateLogFile(DirectoryName)

    if fobj is None:

        return

    #############################################################
    # Write Process Information
    #############################################################

    try:

        WriteProcessInfo(fobj)

        print("Process information stored successfully.")

        print(f"Log File Name : {FileName}")

    except Exception as e:

        print("Error while writing process information.")

        print("Error:", e)

    finally:

        fobj.close()

    print(Border)
    print("Thank you for using Process Information System")
    print(Border)


#################################################################
# Application Entry Point
#################################################################

if __name__ == "__main__":
    main()