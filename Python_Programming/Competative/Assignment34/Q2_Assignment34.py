#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_34: Q.2: Design automation script which accept process name & display information of 
#                                  that processe if it is running.                                
#
# Date:            27/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#################################################################
# Project Name  : Process Information System
#
# Description   : Accepts a process name and displays information
#                 about that process if it is running.
#
# Usage         : python ProcInfo.py Notepad
#################################################################

import sys
import psutil


#################################################################
# Function Name : DisplayProcessInfo
# Description   : Displays information about the specified process.
#################################################################

def DisplayProcessInfo(ProcessName):

    Found = False

    try:

        for Process in psutil.process_iter(["pid", "name", "username", "status"]):

            try:

                ProcessInfo = Process.info

                CurrentProcessName = ProcessInfo["name"]

                if CurrentProcessName is not None:

                    # Compare process names ignoring case
                    if CurrentProcessName.lower() == ProcessName.lower():

                        Found = True

                        print("-" * 60)
                        print("Process is running")
                        print("-" * 60)

                        print("PID      :", ProcessInfo["pid"])
                        print("Name     :", ProcessInfo["name"])
                        print("Username :", ProcessInfo["username"])
                        print("Status   :", ProcessInfo["status"])

                        print("-" * 60)

            except psutil.NoSuchProcess:
                continue

            except psutil.AccessDenied:
                continue

            except psutil.ZombieProcess:
                continue

        if Found == False:

            print(f"Process '{ProcessName}' is not running.")

    except Exception as e:

        print("Unable to scan processes.")
        print("Error :", e)


#################################################################
# Function Name : main
# Description   : Entry point of the application.
#################################################################

def main():

    # Validate command-line arguments

    if len(sys.argv) != 2:

        print("Invalid number of arguments.")
        print(f"Usage : python {sys.argv[0]} ProcessName")

        return

    ProcessName = sys.argv[1]

    # Add .exe automatically if user enters only process name

    if not ProcessName.lower().endswith(".exe"):

        ProcessName = ProcessName + ".exe"

    DisplayProcessInfo(ProcessName)


#################################################################
# Application Entry Point
#################################################################

if __name__ == "__main__":

    main()