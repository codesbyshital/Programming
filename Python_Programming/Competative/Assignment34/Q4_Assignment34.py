#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_34: Q.4: Design automation script which accept directory name & mail id from user & create log  
#                                  file in that directory which contains information of running processes as its name,
#                                  PID, Username. After creating log file send it to specified email                         
#
# Date:            27/07/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#################################################################
# Program Name  : Q4_Assignment34.py
#
# Description   : Accepts a directory name and receiver email
#                 ID through command-line arguments.
#
#                 Creates a log file containing information
#                 about running processes and sends that log
#                 file through email.
#
# Usage         : python Q4_Assignment34.py DirectoryName __@gmail.com
#                Demo is name of directory 
#                __@gmail.com   : email id
#################################################################

import os
import sys
import time
import psutil
import smtplib

from email.message import EmailMessage


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
# Function Name : ValidateEmail
# Description   : Performs basic validation of email address.
#################################################################

def ValidateEmail(EmailID):

    if "@" not in EmailID or "." not in EmailID:

        print("Invalid email address.")
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

        for Process in psutil.process_iter(
                ["pid", "name", "username", "status"]):

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
    fobj.write("MARVELLOUS PROCESS INFORMATION REPORT\n")
    fobj.write(Border + "\n\n")

    fobj.write(f"Total Running Processes : {len(Data)}\n" )

    fobj.write(f"Scan Date and Time      : " f"{time.strftime('%d-%m-%Y %H:%M:%S')}\n" )

    fobj.write(Border + "\n\n")

    for Info in Data:

        fobj.write( f"PID      : {Info.get('pid')}\n")

        fobj.write(f"Name     : {Info.get('name')}\n")

        fobj.write(f"Username : {Info.get('username')}\n")

        fobj.write(Border + "\n")

    fobj.write("\n")
    fobj.write(Border + "\n")
    fobj.write("END OF PROCESS INFORMATION REPORT\n")
    fobj.write(Border + "\n")


#################################################################
# Function Name : SendEmail
# Description   : Sends the log file as an email attachment.
#################################################################

def SendEmail(
        Sender,
        AppPassword,
        Receiver,
        Subject,
        Body,
        AttachmentPath):

    try:

        # Create Email Object
        msg = EmailMessage()

        # Email Headers
        msg["From"] = Sender
        msg["To"] = Receiver
        msg["Subject"] = Subject

        # Email Body
        msg.set_content(Body)

        #########################################################
        # Attach Log File
        #########################################################

        with open(AttachmentPath, "rb") as fobj:

            FileData = fobj.read()

            FileName = os.path.basename(AttachmentPath)

        msg.add_attachment(FileData,maintype="application", subtype="octet-stream", filename=FileName)

        #########################################################
        # Connect to Gmail SMTP Server
        #########################################################

        smtp = smtplib.SMTP_SSL("smtp.gmail.com",465)

        # Login
        smtp.login(Sender,AppPassword)

        # Send Email
        smtp.send_message(msg)

        # Close Connection
        smtp.quit()

        print(f"Email sent successfully to: {Receiver}")

        return True

    except FileNotFoundError:

        print("Attachment file not found.")

        return False

    except smtplib.SMTPAuthenticationError:

        print("Email authentication failed. "  "Check sender email and App Password." )

        return False

    except smtplib.SMTPException as e:

        print("Unable to send email.")
        print("Error:", e)

        return False

    except Exception as e:

        print("Unexpected error while sending email.")
        print("Error:", e)

        return False


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

    if len(sys.argv) != 3:

        print("Invalid number of arguments.")

        print("Usage:")

        print(f'python {sys.argv[0]} ' '"DirectoryName" ReceiverEmail' )

        return

    #############################################################
    # Accept Command-Line Arguments
    #############################################################

    DirectoryName = sys.argv[1]

    Receiver = sys.argv[2]

    #############################################################
    # Validate Directory
    #############################################################

    if not ValidateDirectory(DirectoryName):

        return

    #############################################################
    # Validate Email
    #############################################################

    if not ValidateEmail(Receiver):

        return

    #############################################################
    # Create Log File
    #############################################################

    fobj, FileName = CreateLogFile(
        DirectoryName
    )

    if fobj is None:

        return

    #############################################################
    # Write Process Information
    #############################################################

    try:

        WriteProcessInfo(fobj)

        print( "Process information stored successfully." )

    except Exception as e:

        print(  "Error while writing process information." )

        print("Error:", e)

        fobj.close()

        return

    finally:

        fobj.close()

    #############################################################
    # Sender Email Configuration
    #############################################################

    # Enter your Gmail address here

    Sender = "smurumkar20@gmail.com"

    # Enter your 16-character Google App Password here

    AppPassword = "epxh gmyo kabg yzlu"

    #############################################################
    # Send Email
    #############################################################

    Subject = "Process Information Report"

    Body = """
Hello,

Please find the attached Process Information Report.

The report contains information about currently
running processes including:

1. Process Name
2. Process ID (PID)
3. Username

Regards,
Marvellous Process Information System
"""

    SendEmail(
        Sender,
        AppPassword,
        Receiver,
        Subject,
        Body,
        FileName
    )

    print(Border)
    print("Thank you for using Process Information System")
    print(Border)


#################################################################
# Application Entry Point
#################################################################

if __name__ == "__main__":

    main()