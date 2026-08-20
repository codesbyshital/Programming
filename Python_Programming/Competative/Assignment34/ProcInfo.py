#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Project Title : Process Surveillance System
# Assignment_34: Q.1: Design automation script which display information of running processes as its name, 
#                                  PID, Username. Udage : ProcInfo.py  
#
# Description   : This automation script collects information
#                 about running processes, including:
#
#                 1. Process Name
#                 2. Process ID
#                 3. Username
#                 4. Process Status
#
#                 All operational information is stored in a log file.
#
# Author        : Shital Ajit Nikam
# Date          : 27/07/2026
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import sys
import time
import schedule
import logging

from ProcInfoHelper import *


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : DisplayHelp
# Description   : Displays project information.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def DisplayHelp():

    print("-" * 70)

    print("Process Surveillance Automation Script")

    print("-" * 70)

    print("This automation script performs the following:")

    print("1. Scans running processes.")
    print("2. Collects Process Name.")
    print("3. Collects Process ID.")
    print("4. Collects Username.")
    print("5. Collects Process Status.")
    print("6. Stores process information in a log file.")
    print("7. Executes periodically.")

    print("-" * 70)


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : DisplayUsage
# Description   : Displays usage information.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def DisplayUsage():

    print("-" * 70)

    print("Usage:")

    print(f"python {sys.argv[0]} " "<TimeInterval> <LogDirectory>")

    print("")
    print("TimeInterval : Time in minutes for periodic execution" )

    print("LogDirectory : Directory where log files will be created")

    print("")
    print("Example:")

    print(f'python {sys.argv[0]} 5 "Logs"' )

    print("-" * 70)


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : PerformScheduledTask
# Description   : Performs process scanning.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def PerformScheduledTask():

    try:

        logging.info("Starting scheduled process scan.")

        Result = WriteProcessInformation()

        if Result:
            logging.info("Process scan completed successfully.")

        else:
            logging.error("Process scan failed.")

    except Exception as e:

        logging.error(f"Error in scheduled task: {e}")


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : StartScheduler
# Description   : Starts periodic execution.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def StartScheduler(TimeInterval):

    logging.info(f"Scheduler started with interval: " f"{TimeInterval} minutes")

    # Execute immediately

    PerformScheduledTask()

    # Execute periodically

    #schedule.every(TimeInterval).minutes.do(PerformScheduledTask)
    schedule.every(TimeInterval).seconds.do(PerformScheduledTask)


    try:

        while True:
            schedule.run_pending()

            time.sleep(1)

    except KeyboardInterrupt:

        logging.info( "Process Surveillance System stopped by user.")


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : main
# Description   : Entry point of the application.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def main():

    #############################################################
    # Help Option
    #############################################################

    if len(sys.argv) == 2:

        if sys.argv[1].lower() == "--h":

            DisplayHelp()

            return

        elif sys.argv[1].lower() == "--u":

            DisplayUsage()

            return

    #############################################################
    # Validate Number of Arguments
    #############################################################

    if len(sys.argv) != 3:

        print("Invalid arguments. " "Use --u for usage information." )

        return

    #############################################################
    # Read Command Line Arguments
    #############################################################

    TimeInterval = ValidateInterval(sys.argv[1])

    FolderName = sys.argv[2]

    #############################################################
    # Validate Time Interval
    #############################################################

    if TimeInterval is None:

        return

    #############################################################
    # Create Log File
    #############################################################

    LogFileName = CreateLogFile(FolderName)

    if LogFileName is None:

        return

    #############################################################
    # Start Scheduler
    #############################################################

    StartScheduler(TimeInterval)


if __name__ == "__main__":
    main()
