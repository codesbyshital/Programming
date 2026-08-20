#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
# Module Name : DuplicateFileRemovalHelper.py
# Description : Contains user-defined functions for the Automated Disk cleaning / Duplicate file Removal System.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Modules Used :
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import sys                  #used for Command line Arguments
import os                   #used for system operations
import time                 #Time formatting
import hashlib              #checksum calculations  : MD5
import logging
import smtplib
from email.message import EmailMessage
import configparser


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : CreateLogDirectory
# Description   : Creates Logs directory if it does not exist.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def CreateLogDirectory():

    try:
        LogDirectory = "Logs"

        if not os.path.exists(LogDirectory):
            os.mkdir(LogDirectory)

        return LogDirectory

    except OSError as e:
        logging.error(f"Unable to create log directory: {e}")
        return None


#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : CreateLogFile
# Description   : Creates a timestamp-based log file.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def CreateLogFile():

    try:
        LogDirectory = CreateLogDirectory()

        if LogDirectory is None:
            return None

        Timestamp = time.strftime("%Y-%m-%d_%H-%M-%S")

        LogFileName = os.path.join(
            LogDirectory,
            f"DiskSanitiser_{Timestamp}.log"
        )

        logging.basicConfig(
            filename=LogFileName,
            level=logging.INFO,
            format="%(asctime)s : %(levelname)s : %(message)s"
        )

        logging.info("-" * 70)
        logging.info("Automated Disk cleaning Started")
        logging.info("-" * 70)

        return LogFileName

    except Exception as e:
        print("Unable to create log file.")
        return None



#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : ValidateDirectory
# Description   : Validates the directory path.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def ValidateDirectory(DirectoryName):

    if not DirectoryName:
        logging.error("Directory path is empty.")
        return False

    if not os.path.exists(DirectoryName):
        logging.error(
            f"Directory does not exist: {DirectoryName}"
        )
        return False

    if not os.path.isdir(DirectoryName):
        logging.error(
            f"Specified path is not a directory: {DirectoryName}"
        )
        return False

    logging.info(
        f"Directory validation successful: {DirectoryName}"
    )

    return True


#################################################################
# Function Name : CalculateChecksum
# Description   : Calculates MD5 checksum of a file.
#################################################################

def CalculateChecksum(FileName):

    try:

        HashObject = hashlib.md5()

        with open(FileName, "rb") as FileObject:

            while True:

                Buffer = FileObject.read(1024)

                if not Buffer:
                    break

                HashObject.update(Buffer)

        return HashObject.hexdigest()

    except PermissionError:

        logging.error(
            f"Permission denied while reading file: {FileName}"
        )

        return None

    except FileNotFoundError:

        logging.error(
            f"File not found: {FileName}"
        )

        return None

    except OSError as e:

        logging.error(
            f"Unable to read file {FileName}: {e}"
        )

        return None


#################################################################
# Function Name : ScanDirectory
# Description   : Scans all files in the directory and
#                 calculates their checksums.
#################################################################

def ScanDirectory(DirectoryName):

    DuplicateDictionary = {}

    TotalFilesScanned = 0

    try:

        for FolderName, SubFolders, FileNames in os.walk(
            DirectoryName
        ):

            for FileName in FileNames:

                FilePath = os.path.join(
                    FolderName,
                    FileName
                )

                TotalFilesScanned += 1

                Checksum = CalculateChecksum(FilePath)

                if Checksum is None:
                    continue

                if Checksum in DuplicateDictionary:

                    DuplicateDictionary[Checksum].append(
                        FilePath
                    )

                else:

                    DuplicateDictionary[Checksum] = [
                        FilePath
                    ]

        logging.info(
            f"Total files scanned: {TotalFilesScanned}"
        )

        return DuplicateDictionary, TotalFilesScanned

    except PermissionError as e:

        logging.error(
            f"Permission denied while scanning directory: {e}"
        )

        return {}, TotalFilesScanned

    except OSError as e:

        logging.error(
            f"Directory scanning error: {e}"
        )

        return {}, TotalFilesScanned


#################################################################
# Function Name : GetDuplicateFiles
# Description   : Filters duplicate files from checksum dictionary.
#################################################################

def GetDuplicateFiles(DuplicateDictionary):

    DuplicateFiles = []

    for Checksum, FileList in DuplicateDictionary.items():

        if len(FileList) > 1:

            DuplicateFiles.append(FileList)

    return DuplicateFiles


#################################################################
# Function Name : DeleteDuplicateFiles
# Description   : Deletes duplicate files while keeping
#                 the first/original file.
#################################################################

def DeleteDuplicateFiles(DuplicateFiles):

    TotalFilesDeleted = 0
    SpaceSaved = 0

    try:

        for FileList in DuplicateFiles:

            # Keep the first file
            FilesToDelete = FileList[1:]

            for FilePath in FilesToDelete:

                try:

                    # Get size BEFORE deleting
                    FileSize = os.path.getsize(FilePath)

                    os.remove(FilePath)

                    TotalFilesDeleted += 1

                    SpaceSaved += FileSize

                    logging.info(
                        f"Duplicate file deleted: {FilePath}"
                    )

                except PermissionError:

                    logging.error(
                        f"Permission denied: {FilePath}"
                    )

                except FileNotFoundError:

                    logging.error(
                        f"File not found while deleting: {FilePath}"
                    )

                except OSError as e:

                    logging.error(
                        f"Unable to delete {FilePath}: {e}"
                    )

        return TotalFilesDeleted, SpaceSaved

    except Exception as e:

        logging.error(
            f"Unexpected error during deletion: {e}"
        )

        return TotalFilesDeleted, SpaceSaved

#################################################################
# Function Name : PerformDiskSanitisation
# Description   : Performs complete disk sanitisation process.
#################################################################

def PerformDiskSanitisation(DirectoryName):

    StartTime = time.time()

    logging.info(f"Disk sanitisation started for: {DirectoryName}")

    DuplicateDictionary, TotalFilesScanned = ScanDirectory(DirectoryName)

    DuplicateFiles = GetDuplicateFiles(DuplicateDictionary)

    # Number of duplicate copies that can be deleted
    TotalDuplicatesFound = sum(len(FileList) - 1 for FileList in DuplicateFiles)

    TotalFilesDeleted, SpaceSaved = DeleteDuplicateFiles(DuplicateFiles)

    EndTime = time.time()

    ExecutionTime = round(EndTime - StartTime,6)

    logging.info("-" * 70)
    logging.info("DISK CLEANING REPORT")
    logging.info("-" * 70)

    logging.info(f"Directory                : {DirectoryName}")

    logging.info(f"Total Files Scanned      : {TotalFilesScanned}")

    logging.info(f"Duplicate Files Found    : {TotalDuplicatesFound}" )

    logging.info(f"Total Files Deleted      : {TotalFilesDeleted}")

    logging.info(f"Disk Space Saved         : " f"{SpaceSaved / (1024 * 1024):.2f} MB" )

    logging.info(f"Execution Time           : "f"{ExecutionTime} seconds")

    logging.info("-" * 70)

    return (
        TotalFilesScanned,
        TotalDuplicatesFound,
        TotalFilesDeleted,
        SpaceSaved,
        ExecutionTime
        )

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function : SendEmail() : It sends log file as email attachment.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

def SendEmail(Sender, AppPassword, Receiver,
              Subject, Body, AttachmentPath):

    try:

        # Create email object
        Message = EmailMessage()

        # Set email headers
        Message["From"] = Sender
        Message["To"] = Receiver
        Message["Subject"] = Subject

        # Add email body
        Message.set_content(Body)

        # Attach log file
        try:

            with open(AttachmentPath, "rb") as FileObject:

                FileData = FileObject.read()

                FileName = os.path.basename(AttachmentPath)

            Message.add_attachment(
                FileData,
                maintype="application",
                subtype="octet-stream",
                filename=FileName
            )

            logging.info(f"Log file attached successfully: {FileName}")

        except FileNotFoundError:

            logging.error(f"Attachment file not found: "f"{AttachmentPath}" )

            return False

        except PermissionError:

            logging.error(f"Permission denied while reading " f"attachment: {AttachmentPath}" )

            return False

        except OSError as e:

            logging.error(f"Unable to attach log file: {e}")

            return False

        # Connect to Gmail SMTP server
        with smtplib.SMTP_SSL("smtp.gmail.com", 465) as SMTPServer:

            # Login
            SMTPServer.login(Sender, AppPassword)

            # Send email
            SMTPServer.send_message(Message)

        logging.info(f"Email sent successfully to: {Receiver}")

        return True

    except smtplib.SMTPAuthenticationError:

        logging.error("Email authentication failed. " "Check sender email ID and App Password." )

        return False

    except smtplib.SMTPException as e:

        logging.error(f"SMTP error occurred: {e}")

        return False

    except OSError as e:

        logging.error(f"Network or connection error: {e}")

        return False

    except Exception as e:

        logging.error(f"Unexpected error while sending email: {e}")

        return False

#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# Function Name : ReadEmailConfiguration
# Description   : Reads email configuration from config.ini.
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


def ReadEmailConfiguration():

    try:

        Config = configparser.ConfigParser()

        Config.read("config.ini")

        Sender = Config["EMAIL"]["Sender"]

        AppPassword = Config["EMAIL"]["AppPassword"]

        Receiver = Config["EMAIL"]["Receiver"]

        return (Sender,AppPassword,Receiver)

    except KeyError as e:

        logging.error( f"Missing email configuration: {e}")

        return None, None, None

    except Exception as e:

        logging.error(f"Unable to read email configuration: {e}" )

        return None, None, None