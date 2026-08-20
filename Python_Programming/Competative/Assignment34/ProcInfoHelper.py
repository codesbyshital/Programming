#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Module Name    : ProcInfoHelper
# Description    : Contains helper functions for Process Surveillance Automation System.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import os
import time
import psutil
import logging


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : ValidateInterval
# Description   : Validates the time interval.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def ValidateInterval(TimeInterval):

    try:

        TimeInterval = int(TimeInterval)

        if TimeInterval <= 0:

            logging.error("Time interval must be greater than zero." )
            return None

        return TimeInterval

    except ValueError:

        logging.error("Invalid time interval. Please enter an integer value.")
        return None


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : ValidateDirectory
# Description   : Validates or creates the log directory.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def ValidateDirectory(FolderName):

    try:

        if os.path.exists(FolderName):

            if not os.path.isdir(FolderName):

                logging.error(f"Path exists but is not a directory: "f"{FolderName}")
                return False

        else:

            os.makedirs(FolderName)

        return True

    except OSError as e:

        logging.error(f"Unable to create or access directory: {e}")
        return False


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : CreateLogFile
# Description   : Creates a timestamp-based log file.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def CreateLogFile(FolderName):

    try:

        if not ValidateDirectory(FolderName):

            return None

        Timestamp = time.strftime("%Y-%m-%d_%H-%M-%S")

        FileName = os.path.join(FolderName,f"ProcessInfo_{Timestamp}.log")

        logging.basicConfig(
            filename=FileName,
            level=logging.INFO,
            format="%(asctime)s : %(levelname)s : %(message)s"
        )

        logging.info("-" * 70)
        logging.info("PROCESS SURVEILLANCE AUTOMATION SYSTEM")
        logging.info(f"Log file created successfully: {FileName}")
        logging.info("-" * 70)

        return FileName

    except Exception as e:
        return None


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : ProcessScan
# Description   : Fetches information about running processes.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def ProcessScan():

    ListProcess = []     # list of Dictionaries

    try:

        for Process in psutil.process_iter():

            try:

                Info = Process.as_dict(attrs=["pid","name","username","status"])   

                ListProcess.append(Info)     # appends info

            except (psutil.NoSuchProcess, psutil.AccessDenied,psutil.ZombieProcess) as e:

                logging.error(f"Unable to access process information: {e}")

        return ListProcess      # returns list of dictionary

    except Exception as e:

        logging.error(f"Error while scanning processes: {e}")

        return []


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : WriteProcessInformation
# Description   : Writes process information into log file.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def WriteProcessInformation():

    try:

        StartTime = time.perf_counter()

        Data = ProcessScan()

        logging.info("")
        logging.info("---------------- SYSTEM PROCESS REPORT ----------------")

        logging.info(f"Total Running Processes : {len(Data)}")

        logging.info("-" * 70)

        for Info in Data:

            logging.info(f"PID      : {Info.get('pid')}")

            logging.info(f"Name     : {Info.get('name')}")

            logging.info(f"Username : {Info.get('username')}")

            logging.info(f"Status   : {Info.get('status')}")

            logging.info("-" * 70)

        EndTime = time.perf_counter()

        ExecutionTime = EndTime - StartTime

        logging.info(f"Total Processes Found : {len(Data)}")

        logging.info(f"Execution Time        : " f"{ExecutionTime:.6f} seconds")

        logging.info("-" * 70)

        return True

    except Exception as e:

        logging.error(f"Error while writing process information: {e}")

        return False