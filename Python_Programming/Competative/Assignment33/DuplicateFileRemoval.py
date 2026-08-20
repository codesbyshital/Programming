    
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Project Title : Automated Disk Sanitiser
# Description   : Duplicate File Removal System
#                 This file will only handle:
#                 Command-line arguments ,Input file , Help and Usage, Validation, Scheduling
#
# Author        : Shital Ajit Nikam
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import sys
import os
import time
import logging
import schedule

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Import User defined Module : DuplicateFileRemovalHelper
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

from DuplicateFileRemovalHelper import (
    CreateLogFile,
    ReadEmailConfiguration,
    ValidateDirectory,
    PerformDiskSanitisation,
    SendEmail
)


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : DisplayHelp
# Description   : Displays information about the project.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def DisplayHelp():

    print("""
-----Automated Disk Cleaning System---------

This script performs the following operations:

1. Directory Scanning using os.walk().
2. File handeling in Binary mode.
3. Calculates MD5 checksum of files.
4. Identifies duplicate files.
5. Deletes duplicate copies.
6. Calculates disk space saved.
7. Creates detailed log reports.
8. Schedules periodically execution.
9. Accepts command-line or input file values.
10. Disk space optimization
11 : Sends Log file through Email.
""")


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : DisplayUsage
# Description   : Displays script usage.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def DisplayUsage():

    print("""
Usage:

Command Line Mode:

python DuplicateFileRemoval.py <TimeInterval> <DirectoryPath>

Example:

python DuplicateFileRemoval.py 5 "Test"

Input File Mode:

python DuplicateFileRemoval.py --input Input/Input.txt

Input file format:

5
Test

Options:

--h       Display help
--u       Display usage
--input   Read input from file

""")


#################################################################
# Function Name : ReadInputFile
# Description   : Reads interval and directory from input file.
#################################################################

def ReadInputFile(FileName):

    try:

        if not os.path.exists(FileName):

            logging.error(f"Input file does not exist: {FileName}" )

            return None, None

        with open(FileName, "r") as FileObject:

            Lines = FileObject.readlines()

        Lines = [
            Line.strip()
            for Line in Lines
            if Line.strip()
        ]

        if len(Lines) != 2:

            logging.error("Input file must contain exactly " "two values: interval and directory path.")

            return None, None

        TimeInterval = int(Lines[0])

        DirectoryName = Lines[1]

        return TimeInterval, DirectoryName

    except ValueError:

        logging.error("Time interval in input file must be an integer.")

        return None, None

    except PermissionError:

        logging.error(f"Permission denied while reading input file: " f"{FileName}" )

        return None, None

    except OSError as e:

        logging.error(
            f"Unable to read input file: {e}"
        )

        return None, None


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : ValidateInterval
# Description   : Validates the time interval.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def ValidateInterval(TimeInterval):

    try:

        TimeInterval = int(TimeInterval)

        if TimeInterval <= 0:

            logging.error(
                "Time interval must be greater than zero."
            )

            return None

        return TimeInterval

    except ValueError:

        logging.error(
            "Time interval must be a valid integer."
        )

        return None
    

#################################################################
# Function Name : PerformScheduledTask
# Description   : Performs disk sanitisation and sends the
#                 generated log file through email.
#################################################################

def PerformScheduledTask(DirectoryName, Sender, AppPassword,Receiver,LogFileName):

    try:

        logging.info(f"Scheduler started with interval:")

        # Perform disk sanitisation
        Result = PerformDiskSanitisation(DirectoryName)

        if Result is None:

            logging.error("Disk sanitisation failed.")

            return

        # Email details
        Subject = ("Automated Disk Sanitiser Report")

        Body = """
                Hello,

                The Automated Disk Sanitiser operation has
                completed successfully.

                Please find the log report attached.

                Regards,
                Automated Disk Sanitiser System
                """

        # Send log through email
        EmailStatus = SendEmail(
                                Sender,
                                AppPassword,
                                Receiver,
                                Subject,
                                Body,
                                LogFileName
                            )

        if EmailStatus:

            logging.info("Log file sent through email successfully.")

        else:

            logging.error("Unable to send log file through email.")

    except Exception as e:

        logging.error(f"Error in scheduled task: {e}")

#################################################################
# Function Name : StartScheduler
# Description   : Starts periodic disk sanitisation.
#################################################################

def StartScheduler(
        TimeInterval,
        DirectoryName,
        Sender,
        AppPassword,
        Receiver,
        LogFileName):

    logging.info(f"Scheduler started with interval: "f"{TimeInterval} minutes" )

    # Run once immediately
    PerformScheduledTask(DirectoryName,Sender,AppPassword,Receiver,LogFileName)

    # Schedule periodic execution
    #schedule.every(TimeInterval).minutes.do(PerformScheduledTask,DirectoryName,Sender,AppPassword,Receiver,LogFileName)

    schedule.every(TimeInterval).seconds.do(PerformScheduledTask,DirectoryName,Sender,AppPassword,Receiver,LogFileName)

    try:
        while True:
            schedule.run_pending()

            time.sleep(1)

    except KeyboardInterrupt:

        logging.info( "Disk Sanitiser stopped by user." )


#################################################################
# Function Name : main
# Description   : Entry point of the application.
#################################################################

def main():

    # Help and Usage are intentionally displayed on the console.

    if len(sys.argv) == 2:

        if sys.argv[1].lower() == "--h":

            DisplayHelp()
            return

        elif sys.argv[1].lower() == "--u":

            DisplayUsage()
            return

    # Create log file before operational processing
    LogFileName = CreateLogFile()

    if LogFileName is None:
        return

    TimeInterval = None
    DirectoryName = None

    #############################################################
    # Command Line Mode
    #############################################################

    if len(sys.argv) == 3:

        TimeInterval = ValidateInterval(sys.argv[1])

        DirectoryName = sys.argv[2]

    #############################################################
    # Input File Mode
    #############################################################

    elif (len(sys.argv) == 3 and sys.argv[1].lower() == "--input"):

        TimeInterval, DirectoryName = ReadInputFile(sys.argv[2] )

        TimeInterval = ValidateInterval(TimeInterval)

    else:

        logging.error("Invalid command line arguments." )

        return

    #############################################################
    # Validate Inputs
    #############################################################

    if TimeInterval is None:
        return

    if not ValidateDirectory(DirectoryName):
        return

    #############################################################
    # Start Scheduler
    #############################################################

    Sender, AppPassword, Receiver = ReadEmailConfiguration()

    if not Sender or not AppPassword or not Receiver:
        logging.error("Email configuration is invalid." )
        return
        
    StartScheduler(TimeInterval,DirectoryName,Sender,AppPassword,Receiver,LogFileName)


if __name__ == "__main__":
    main()  
    
