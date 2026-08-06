///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project Title : Customized Virtual File System (CVFS)
// Description: custom implementation of a Virtual File System (VFS) 
//              that simulates the core functionality of the Linux file System.
//              *Practical knowledge of data structures used in OS -
//	                1.Inode Management
//	                2.Super Block
//	                3.File Tables
//	                4.User File Descriptor Table (UFDT)
//	                5.UAREA
//              *Implementation of internal working of system calls (open,close,read,write,ls,stat,unlink)
//
// Date:            1/08/2026
// Author:          Shital Ajit Nikam   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//
//  Header Files Inclusion
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

//////////////////////////////////////////////////////
//
//  User Defined Macros
//
//////////////////////////////////////////////////////

#define MAXINODE 10
#define MAXFILESIZE 1024
#define MAXOPENFILES 10

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULARFILE 1       //used this macro for type of file
#define SPECIALFILE 2

#define BACKUP_PATH "C:\\Users\\ADMIN\\Desktop\\LB\\CVFS\\Backup"


//////////////////////////////////////////////////////
//
//  User Defined Macros for error handling
//
//////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1            

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8
#define ERR_FILE_NOT_OPEN -9

//////////////////////////////////////////////////////
//
//  Structure Name :    BootBlock
//  Description :       It holds the information to
//                      boot the operating system
//
//////////////////////////////////////////////////////

struct BootBlock                    // dummy structure
{
    char Information[100];
};

//////////////////////////////////////////////////////
//
//  Structure Name :    SuperBlock
//  Description :       It holds the information of
//                      complete File system
//
//////////////////////////////////////////////////////

struct SuperBlock                   
{
    int TotalInodes;
    int FreeInodes;             // freeInode--
};

//////////////////////////////////////////////////////
//
//  Structure Name :    Inode
//  Description :       It holds information of file
//
//////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{
    char FileName[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;           // till 1024 MAXSIZE (original file system, size gets allocated as 1 KB per block)
    int FileType;
    int ReferenceCount;
    int Permission;
    char *Buffer;           //pointer for data
    struct Inode *next;
};

typedef struct Inode INODE;
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

//////////////////////////////////////////////////////
//
//  Structure Name :    FileTable
//  Description :       It holds information of opened
//                      files
//
//////////////////////////////////////////////////////


// FileTable will gets created whenever file gets created...

#pragma pack(1)
struct FileTable 
{           
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;
};

typedef struct FileTable FILETABLE;
typedef struct FileTable* PFILETABLE;

//////////////////////////////////////////////////////
//
//  Structure Name :    UAREA
//  Description :       It holds information of process
//
//////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];      // how many files gets opened
};

//////////////////////////////////////////////////////
//
//  Global variables used in the project
//
//////////////////////////////////////////////////////

struct BootBlock bootobj;
struct SuperBlock superobj;
struct UAREA uareaobj;

PINODE head = NULL;

//////////////////////////////////////////////////////
//
//  Function Name :     InitialiseUAREA
//  Description :       It is used to initialise UAREA
//  Author :            Shital Ajit Nikam
//  Date :              1/08/2026
//
//////////////////////////////////////////////////////

void InitialiseUAREA()
{
    int i = 0;

    strcpy(uareaobj.ProcessName, "Myexe");
    
    for(i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS : UAREA gets initalised succesfully\n");
}

//////////////////////////////////////////////////////
//
//  Function Name :     InitialiseSuperBlock()
//  Description :       It is used to initialise super block
//  Author :            Shital Ajit Nikam
//  Date :              1/08/2026
//
//////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVFS : Super Block gets initalised succesfully\n");
}

//////////////////////////////////////////////////////
//
//  Function Name :     CreateDILB()
//  Description :       It is used to create linked list of inodes
//  Author :            Shital Ajit Nikam
//  Date :              1/08/2026
//
//////////////////////////////////////////////////////

void CreateDILB()
{
    PINODE temp = NULL;
    PINODE newn = NULL;

    int i = 0;

    temp = head;

    for(i = 1; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));

        newn->InodeNumber = i;
        strcpy(newn->FileName,"\0");
        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->FileType = 0;
        newn->ReferenceCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;
        newn->next = NULL;

        if(temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }
    }

    printf("Marvellous CVFS : DILB gets created succesfully\n");
}

//////////////////////////////////////////////////////
//
//  Function Name :     StartAuxillaryDataInitialisation()
//  Description :       It is used to call all such functions
//                      which are used to initialise auxillary data
//  Author :            Shital Ajit Nikam
//  Date :              1/08/2026
//
//////////////////////////////////////////////////////

void StartAuxillaryDataInitialisation()
{
    strcpy(bootobj.Information,"Booting process of Marvellous CVFS is completed\n");

    printf("%s\n",bootobj.Information);
    
    InitialiseUAREA();
    
    InitialiseSuperBlock();

    CreateDILB();
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayHelp()
//  Description :       It is used to Display help to
//                      the user of project
//  Author :            Shital Ajit Nikam
//  Date :              1/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

void DisplayHelp()
{
    printf("----------------------------------------------------------------------\n");
    printf("---------------- Marvellous CVFS Help Page ---------------------------\n");
    printf("----------------------------------------------------------------------\n");

    printf("man :    It is used to display the manual page\n");
    printf("clear :  It is used to clear the terminal screen\n");
    printf("creat : It is used to create new regular file\n");
    printf("open :   It is used to open regular file\n");
    printf("close :  It is used to close regular file\n");
    printf("write :  It is used to write the data into the file\n");
    printf("read :   It is used to read the data from the file\n");
    printf("stat :   It is used to display statistical information of file\n");
    printf("unlink : It is used to delete the file\n");
    printf("exit :   It is used to terminate Marvellous CVFS\n");

    printf("----------------------------------------------------------------------\n");

}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     ManPageDisplay()
//  Description :       It is used to Display manpage of specific command
//
//  Input:              Name of Command                      
//  Author :            Shital Ajit Nikam
//  Date :              1/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

void ManPageDisplay(char Name[])
{
    if(strcmp(Name,"exit") == 0)
    {
        printf("About : It is used to Terminate the project\n");
        printf("Usage : exit\n");
    }
    else if(strcmp(Name,"ls") == 0)
    {
        printf("About : It is used to used to List all files from Current Directory\n");
        printf("Usage : ls\n");

    }
    else if(strcmp(Name,"clear") == 0)
    {
        printf("About : It is used to clear the Terminal\n");
        printf("Usage : exit\n");
    }

    else if(strcmp(Name,"creat") == 0)
    {
        printf("About : It is used to create new file\n");
        printf("Usage : creat File_Name Permission\n");
        printf("File_Name : Name of file that we want to create\n");
        printf("Permission : Permission of new file\n");
        printf("Permission : Read-> 1\n");
        printf("Permission : Write -> 2\n");
        printf("Permission : Read + Write -> 3\n");

    }

    else if(strcmp(Name,"unlink") == 0)
    {
        printf("About : It is used to delete existing file\n");
        printf("Usage : unlink File_Name \n");
        printf("File_Name : Name of file that we want to delete\n");
       
    }

    else if(strcmp(Name,"stat") == 0)
    {
        printf("About : It is used to get information about file\n");
        printf("Usage : stat File_Name \n");
        printf("File_Name : Name of file whose information should be fetched\n");
       
    }

    else if(strcmp(Name,"open") == 0)
    {
        printf("About : It is used to open the file\n");
        printf("Usage : open File_Name Mode \n");
        printf("File_Name : Name of file which needs to be open\n");
         printf("Mode : mode of file for which we are openning that file\n");
               
    }

    else
    {
        printf("No manual entry found for %s\n",Name);
    }

}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     IsFileExist()
//  Description :       It is used to check whether the file exist or not.
//
//  Input:              Name of file
//  Output:             True if present
//                      False if not present                      
//  Author :            Shital Ajit Nikam
//  Date :              1/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

bool IsFileExist(
                    char Name[]         // Name of file to check
                )    
{
    PINODE temp = head;         // pointing to global varial of INODE
    bool bFlag = false;

    while(temp != NULL)
    {
        if(strcmp(temp->FileName, Name) == 0)
        {
            bFlag = true;
            break;
        }
        temp = temp->next;
    }

    return bFlag;

}


/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CreateFile()
//  Description :       It is used to create a new file
//
//  Input:              Name of file, Permissions
//  Output:             File Descriptor                      
//  Author :            Shital Ajit Nikam
//  Date :              1/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

int CreateFile(
                char Name[],            // name of the file
                int permission          // file permissions  
             )
{
    PINODE temp = head;

    int i = 0;

    if(superobj.FreeInodes == 0)
    {
        return ERR_NO_INODES;        // use of ERR Macro
    }

    // if permission value is wrong : 
    // permission : 1 = read
    // permission : 2 =  write
    // permission : 3 = read + write

    if(permission < 1 || permission > 3)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(IsFileExist(Name) == true)
    {
        return ERR_FILE_ALREADY_EXIST;
    }

    // Search for empty inode
    while(temp != NULL)
    {
        if(temp->FileType == 0)     // check if inode is empty (FileType gives that value)
        {
            break;
        }

        temp = temp->next;
    }

    // rare case if not found empty inode after whole list travesal
    if(temp == NULL)
    {
        return ERR_NO_INODES;
    }

    // Search empty UFDT entry , Reserve first 3 FD's
    // then allocate memory to temp node

    for(i = 3; i < MAXINODE; i++)        // first 3 FD's are reserved
    {

        if(uareaobj.UFDT[i] == NULL)
        {
            break;
        }

        // Rare Case : inode available but UFDT entry not found then
        if(i == MAXOPENFILES)
        {
            return ERR_MAX_FILES_OPEN;
        }

        //temp = temp->next;
    }

    // Alocate memory for File Table
    uareaobj.UFDT[i] = (PFILETABLE)malloc(sizeof(FILETABLE));

    // Initialise filetable
    uareaobj.UFDT[i]->ReadOffset = 0;       //
    uareaobj.UFDT[i]->WriteOffset = 0;
    uareaobj.UFDT[i]->Mode = permission;

    // connect filetable with inode
    uareaobj.UFDT[i]->ptrinode = temp;

    //initialize all members of inode..
    strcpy(uareaobj.UFDT[i]->ptrinode->FileName, Name);

    //printf("Created : %s\n",uareaobj.UFDT[i]->ptrinode->FileName);

    //Size set to MAXFILESize
    uareaobj.UFDT[i]->ptrinode->FileSize = MAXFILESIZE;

    // Actual size 0 , file is empty
    uareaobj.UFDT[i]->ptrinode->ActualFileSize = 0;

    //FileType set = Regular
    uareaobj.UFDT[i]->ptrinode->FileType = REGULARFILE;

    //Refernce count set to 1
    uareaobj.UFDT[i]->ptrinode->ReferenceCount = 1;

    //Set Permission  = permission(value in permission)
    uareaobj.UFDT[i]->ptrinode->Permission = permission;

    //Allocate memory for files  data ( DataBlock)
    uareaobj.UFDT[i]->ptrinode->Buffer = (char*)malloc(MAXFILESIZE);  // 50 bytes

    superobj.FreeInodes--;          // reduce count of free inodes, as we used 1 inode now


    return i;
}


/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     LsFile()
//  Description :       It is used to display files.
//
//  Input:              None
//  Output:             None           
//  Author :            Shital Ajit Nikam
//  Date :              1/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

void LsFile()
{
    PINODE temp = head;

    printf("----------------------------------------------------------------------\n");
    printf("---------- Marvellous CVFS Files Information -------------------------\n");
    printf("----------------------------------------------------------------------\n");

    while(temp != NULL)
    {
        if(temp->FileType != 0)
        {
            printf("%s\n",temp->FileName);
        }

        temp = temp->next;

    }
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     LsFile_All
//  Description :       It is used to display details of all file
//
//  Input:              None
//  Output:             None           
//  Author :            Shital Ajit Nikam
//  Date :              2/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

void LsFile_All()
{
    PINODE temp = head;

    printf("----------------------------------------------------------------------\n");
    printf("---------- Marvellous CVFS Files Information -------------------------\n");
    printf("----------------------------------------------------------------------\n");

    printf("File Name   Inode Number    ActualFIleSize   Permission \n",temp->FileName, temp->InodeNumber, temp->ActualFileSize, temp->Permission);  // filename,InodeNO,Actual size

    while(temp != NULL)
    {
        if(temp->FileType != 0)
        {
            printf("%s\t\t%d\t\t%d\t\t%d\n",temp->FileName, temp->InodeNumber, temp->ActualFileSize, temp->Permission);  // filename,InodeNO,Actual size
        }

        temp = temp->next;

    }
}


/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     stat_file()
//  Description :       It is used to display all details specific file
//
//  Input:              FileName
//  Output:             Exit status of function           
//  Author :            Shital Ajit Nikam
//  Date :              2/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

int stat_file(
                char Name[]
            )
{
    PINODE temp = NULL;
    int permission = 0;
    int type = 0;

    if(IsFileExist(Name) == false)
    {
        return ERR_FILE_NOT_EXIST;
    }

    temp = head;

    while(temp != NULL)
    {
        if(strcmp(temp->FileName,Name) == 0) // comparing name with inode name
        {
            printf("----------------------------------------------------------------------\n");
            printf("----------Statistical Information of File-----------------------------\n");
            printf("----------------------------------------------------------------------\n");

            printf("File Name : %s\n",temp->FileName);
            printf("Inode Number : %d\n",temp->InodeNumber);
            printf("File Size : %d\n",temp->FileSize);
            printf("Actual File Size : %d\n",temp->ActualFileSize);
            printf("Reference Count : %d\n",temp->ReferenceCount);

            permission = temp->Permission;
            if(permission == READ)
            {
                printf("File Permission : Read Only\n");
            }
            else if (permission == WRITE)
            {                
                printf("File Permission : Write\n");
            }
            else if(permission == READ + WRITE)
            {
                printf("File Permission : Read + Write\n");
            }            

            type = temp->FileType;            // fileType
            if(type == REGULARFILE)
            {
                printf("File Type: Regular File\n");                
            }
            else if(type == SPECIALFILE)
            {
                printf("File Type: Special File\n");                
            }

            printf("----------------------------------------------------------------------\n");

            break;          // break for loop

        }
        temp = temp->next;
    }

    return EXECUTE_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     unlink_file()
//  Description :       It is used to delete the specific file
//
//  Input:              FileName
//  Output:             Exit status of function           
//  Author :            Shital Ajit Nikam
//  Date :              2/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////
int unlink_file(
                char Name[]         // name of file
                )
{
    PINODE temp = NULL;
    int i = 0;

    if(IsFileExist(Name) == false)
    {
        return ERR_FILE_NOT_EXIST;
    }

    //Travel the UFDT (Uarea)

    for(i = 0; i < MAXOPENFILES; i++)               // open files chekcing
    {
        if(uareaobj.UFDT[i] != NULL)
        {
            if(strcmp(uareaobj.UFDT[i]->ptrinode->FileName, Name) == 0) //UFDT->ptrinode->inode->filename
            {
                // deallocate memory of Buffer
                free(uareaobj.UFDT[i]->ptrinode->Buffer);

                uareaobj.UFDT[i]->ptrinode->Buffer = NULL;              // address should be NULL else give segmentation fault while read

                strcpy(uareaobj.UFDT[i]->ptrinode->FileName,"\0");            // remove filename

                uareaobj.UFDT[i]->ptrinode->FileSize = 0;
                uareaobj.UFDT[i]->ptrinode->ActualFileSize = 0;
                uareaobj.UFDT[i]->ptrinode->FileType = 0;
                uareaobj.UFDT[i]->ptrinode->Permission = 0;
                uareaobj.UFDT[i]->ptrinode->ReferenceCount = 0;                
                // Inode number shuld not be 0, we need it for new file

                //deallocate memory of FileTable
                free(uareaobj.UFDT[i]);

                uareaobj.UFDT[i] = NULL;            // UFDT[i] should set to NULL
                
                superobj.FreeInodes++;          // counter of free inode increases


                break;  // imp
            }
        }  // End of if

    }  //End  of for

    return EXECUTE_SUCCESS;

}//End of unlink_file fun


/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     write_file()
//  Description :       It is used to write the data into the specific file
//
//  Input:              File Descriptor
//                      Data that we want to write
//                      Size of data
//                      
//  Output:             Number of bytes succesfully written         
//  Author :            Shital Ajit Nikam
//  Date :              2/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////
int write_file(
                int fd,             // file decriptor
                char *data,         // address of array : data
                int size            // size of data
                )
{

    int offset = 0;

    //printf("File Descriptor : %d\n",fd);
    //printf("Data that we want to write : %s\n",data);
    //printf("size of Data : %d\n",size);

    // if fd is invalid
    if(fd < 0 || fd > MAXOPENFILES)
    {
        return ERR_INVALID_PARAMETER;
    }

    //  if writing permission is not there
    if(uareaobj.UFDT[fd]->ptrinode->Permission < WRITE)
    {
        return ERR_PERMISSION_DENIED;
    }

    // check if space is there in Buffer or not 
    if((MAXFILESIZE - uareaobj.UFDT[fd]->WriteOffset) < size)           // space is not available to write
    {
        return ERR_INSUFFICIENT_SPACE;
    }

    //offset = uareaobj.UFDT[fd]->ptrinode->Buffer + uareaobj.UFDT[fd]->WriteOffset;

    // actual data writing into file
    strncpy(uareaobj.UFDT[fd]->ptrinode->Buffer + uareaobj.UFDT[fd]->WriteOffset,data,size);                       

    // update the write offset
    uareaobj.UFDT[fd]->WriteOffset = uareaobj.UFDT[fd]->WriteOffset + size;

    //update actual file size  // like sum = sum + size;
    uareaobj.UFDT[fd]->ptrinode->ActualFileSize = uareaobj.UFDT[fd]->ptrinode->ActualFileSize + size;


    return size;    // how many bytes written into file

}


/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     read_file()
//  Description :       It is used to read the data from the specific file
//
//  Input:              File Descriptor
//                      Address of empty Buffer.
//                      Size of data
//                      
//  Output:             Number of bytes succesfully read.         
//  Author :            Shital Ajit Nikam
//  Date :              2/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

int read_file(
                int fd,
                char *data,
                int size
            )
{
    //invalid FD
    if(fd < 0 || fd > MAXOPENFILES)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(size <= 0)
    {
        return ERR_INVALID_PARAMETER;
    }

    // file not exist
    if(uareaobj.UFDT[fd] == NULL)
    {
        return ERR_FILE_NOT_EXIST;
    }

    //filter for permission
    if(uareaobj.UFDT[fd]->ptrinode->Permission < READ)
    {
        return ERR_PERMISSION_DENIED;
    }


    if(uareaobj.UFDT[fd]->ReadOffset >= uareaobj.UFDT[fd]->ptrinode->ActualFileSize)
        {
            return ERR_INSUFFICIENT_DATA;
        }

        
    // Read actual data
    if((uareaobj.UFDT[fd]->ptrinode->ActualFileSize - uareaobj.UFDT[fd]->ReadOffset) < size)
    {        
        size = uareaobj.UFDT[fd]->ptrinode->ActualFileSize - uareaobj.UFDT[fd]->ReadOffset;    
    }  

    strncpy(data,uareaobj.UFDT[fd]->ptrinode->Buffer + uareaobj.UFDT[fd]->ReadOffset, size);

    data[size] = '\0';
    
    uareaobj.UFDT[fd]->ReadOffset = uareaobj.UFDT[fd]->ReadOffset + size;

    return size;

}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     open_file()
//  Description :       It is used to open the specific file
//
//  Input:              File Name
//                      Mode of file
//                      
//  Output:                      
//  Author :            Shital Ajit Nikam
//  Date :              4/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

int open_file(
                char Name[],
                int mode
            )
{
    //file not exist
    int i = 0;
    PINODE temp = head;
    

    if(Name == NULL || mode <= 0 || mode > 3)
    {
        return ERR_INVALID_PARAMETER;
    }  
   
    //search file name in FileTable
     while(temp != NULL)
        {
            if((strcmp(Name,temp->FileName) == 0) && (temp->FileType != 0))
            {
                break;
            }

            temp = temp->next;
        }

    if(temp == NULL)
    {
        return ERR_FILE_NOT_EXIST;
    }

    if(temp->Permission < mode)
    {
        return ERR_PERMISSION_DENIED;
    }

    for(i = 3; i < MAXOPENFILES; i++)
    {
        if(uareaobj.UFDT[i] == NULL)
        {
            break;
        }
    }

    if(i == MAXOPENFILES)
    {
        return ERR_MAX_FILES_OPEN;
    }

    uareaobj.UFDT[i] = (PFILETABLE)malloc(sizeof(FILETABLE));

    if(uareaobj.UFDT[i] == NULL)
    {
        return ERR_NO_INODES;
    }

   // uareaobj.UFDT[i]->Count = 1;
    uareaobj.UFDT[i]->Mode = mode;
    uareaobj.UFDT[i]->ReadOffset = 0;
    uareaobj.UFDT[i]->WriteOffset = 0;
    uareaobj.UFDT[i]->ptrinode = temp;

    temp->ReferenceCount++;

    return i;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     close_file()
//  Description :       It is used to close the specific file
//
//  Input:              FD of file name                     
//  Output:                      
//  Author :            Shital Ajit Nikam
//  Date :              4/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

int close_file(int fd)
{
    if(fd < 0 || fd >= MAXOPENFILES)
    {
        return ERR_INVALID_PARAMETER;
    }

    // If file not open
    if(uareaobj.UFDT[fd] == NULL)
    {
        return ERR_FILE_NOT_OPEN; 
    }

    //if file is opened
    uareaobj.UFDT[fd]->ptrinode->ReferenceCount--;

    free(uareaobj.UFDT[fd]);                // free the FD from file table

    uareaobj.UFDT[fd] = NULL;

    return EXECUTE_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Display_File()
//  Description :       It is used to Display the content of specific file
//
//  Input:              File Name                     
//  Output:             File content         
//  Author :            Shital Ajit Nikam
//  Date :              4/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

int Display_File(char Name[])
{
    PINODE temp = head;
    int i = 0;

    if(Name == NULL)
    {
        return ERR_INVALID_PARAMETER;
    }  

    while(temp != NULL)
    {
        if(strcmp(temp->FileName, Name) == 0)
        {
            if(temp->Permission < READ)
            {
                return ERR_PERMISSION_DENIED;
            }
            

            for(i = 0; i < temp->ActualFileSize; i++)
            {
                printf("%c", temp->Buffer[i]);
            }

            printf("\n\n");

            return EXECUTE_SUCCESS;
        }

        temp = temp->next;
    }

    return ERR_FILE_NOT_EXIST;

}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Backup_File()
//  Description :       It is used to Backup the files created Virtually during execution into HDD
//                      (RAM to HDD). This will automatically gets called before exit.
//  Input:                                   
//  Output:             Files created during execution         
//  Author :            Shital Ajit Nikam
//  Date :              4/08/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////


void Backup_File()
{   

 PINODE temp = head;
 char FullPath[260];
    int fd = 0; 

    while(temp != NULL)
    {
        if(temp->FileType != 0)
        {
            sprintf(FullPath,"%s\\%s",BACKUP_PATH, temp->FileName);            //copy the fullpath with files name
            
            fd = creat(FullPath,0777);           // creating that files on specified path in HDD
           
            write(fd, temp->Buffer,temp->ActualFileSize);  //writing the file contents 
        }        

        temp = temp->next;
    }

}


//////////////////////////////////////////////////////
//
//  Entry Point function of the CVFS project
//
//////////////////////////////////////////////////////

int main()
{
    //Input Command
    char str[80] = {'\0'};          //// capacity of one line of cmd is 80

    //Tokenised command
    char Command[5][20] = {{'\0'}};

    //Data for write system call
    char InputBuffer[MAXFILESIZE] = {'\0'};
    
    int iCount = 0, iRet = 0;       // counter
    int size = 0;               // for strlen of inputbuffer  : size of data


    // malloc  : emptybuffer 
    char *EmptyBuffer = NULL;

    StartAuxillaryDataInitialisation();

    printf("----------------------------------------------------------------------\n");
    printf("---------- Marvellous CVFS Started Successfully ------------------------\n");
    printf("----------------------------------------------------------------------\n");

    //Infinite Listening Shell till exit
    while(1)
    {
        fflush(stdin);          // clear the old keyboard input buffer

        strcpy(str,"");         // clear the string buffer

        printf("\nMarvellous CVFS : > ");
        fgets(str,sizeof(str),stdin);           // from string, till str length, from:standard input KeyBoard

        iCount = sscanf(str,"%s %s %s %s %s",Command[0],Command[1],Command[2],Command[3],Command[4]);  // for 5 cmd argumenst

        fflush(stdin);          // clear after use

    
        if(iCount == 1)   // 1 command agument
        {
            //Marvellous CVFS : > exit            
            if(strcmp(Command[0],"exit") == 0)
            {
                Backup_File();
                printf("Thank you for using Marvellous CVFS\n");
                printf("Deallocating of all resources of Marvellous CVFS\n");

                break;          // break while loop
            }

            
            //Marvellous CVFS : > help            
            else if(strcmp(Command[0],"help") == 0)
            {
                DisplayHelp();
            }

            //Marvellous CVFS : > clear
            else if(strcmp(Command[0],"clear") == 0)
            {
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");               // conditional compilation
                #endif

            }

            //Marvellous CVFS : > ls
            else if(strcmp(Command[0],"ls") == 0)
            {
                LsFile();

            }
            else 
            {
                printf("Command not found\n");
                printf("Please refer help option to get more information\n");
                printf("Please refer manual page of command using man\n");
            }    

        } //End of iCount 1

        else if(iCount == 2)        // 2 command agument
        {
            //Marvellous CVFS : > man exit 
            if(strcmp(Command[0],"man") == 0)
            {
                ManPageDisplay(Command[1]);         // passing 2nd parameter of index 1.
            }

            //Marvellous CVFS : > ls -a
            else if((strcmp(Command[0],"ls") == 0) && (strcmp(Command[1],"-a") == 0))
            {
                LsFile_All();         // list all files.
            }

            // Stat command implementation : Marvellous CVFS : > stat Demo.txt
            else if((strcmp(Command[0],"stat") == 0))
            {
                iRet = stat_file(Command[1]);         // file name as parameter

                if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error : File not Exist\n");
                }
            }

            // Marvellous CVFS : > unlink Genesh.txt
            else if((strcmp(Command[0],"unlink") == 0))
            {
                iRet = unlink_file(Command[1]);         // file name as parameter

                if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error : File not Exist\n");
                }
            }


            // Marvellous CVFS : > write 3   // here 3 is fd
            else if((strcmp(Command[0],"write") == 0))
            {
                printf("Enter the Data that you want to write into the file...\n");
                fgets(InputBuffer,MAXFILESIZE,stdin);
                
                size = strlen(InputBuffer);

                iRet = write_file(atoi(Command[1]),InputBuffer,size-1);         // FD,InputBuffer, size of data-1


                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid Parameter\n");
                    printf("Please refer manpage for more information\n");
                }

                else if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error : File not Exist\n");
                }

                else if(iRet == ERR_PERMISSION_DENIED)
                {
                    printf("Error : There is no permission to write the file\n");
                }
                
                else if(iRet == ERR_INSUFFICIENT_SPACE)
                {
                    printf("Error : There is no space to write the data\n");
                }

                else
                {
                    printf("%d bytes gets successfully written into file\n",iRet);
                }

            }//End of Write    
            
            //Marvellous CVFS : > close 3   // here 3 is fd
            else if(strcmp(Command[0],"close") == 0)
            {               

                iRet = close_file(atoi(Command[1]));

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid Parameter\n");
                    printf("Please refer manpage for more information\n");
                }

                else if(iRet == EXECUTE_SUCCESS)
                {
                    printf("File closed successfully\n");
                }   
                else
                {
                    printf("Error....");
                }                                   
                                
            } // End of close
            
            //Marvellous CVFS : > display Demo.txt   // Displays contents of file
            else if(strcmp(Command[0],"display") == 0)
            {               
                printf("----------------------------------------------------------------------\n");
                printf("File Name : %s\n",Command[1]);
                printf("----------------------------------------------------------------------\n");

                iRet = Display_File(Command[1]);

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid Parameter\n");
                    printf("Please refer manpage for more information\n");
                }

                else if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error : File not Exist\n");
                }  
                else if(iRet == ERR_PERMISSION_DENIED)
                {
                    printf("Error : Permission to read file is denied\n");
                }                  
                
                else if(iRet == EXECUTE_SUCCESS)
                {                    
                    printf("File displayed successfully...");
                }

                else
                {
                    printf("Error....");
                }
                
            } // End of Display

            else 
            {
                printf("Command not found\n");
                printf("Please refer help option to get more information\n");
                printf("Please refer manual page of command using man\n");
            }    

        }//End of iCount 2 

        else if(iCount == 3)  // 3 command aguments
        {
            //Marvellous CVFS : > creat Ganesh.txt 3

            if(strcmp(Command[0],"creat") == 0)
            {
                iRet = CreateFile(Command[1],atoi(Command[2]));   //[pass argument 2 & 3]  : atoi = ascii to interger
                
                if(iRet == ERR_NO_INODES)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because there is no Free Inode...\n");
                }

                else if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because parameters of command are Invalid...\n");
                    printf("Please use man page to get actual parameters...\n");
                }

                else if(iRet == ERR_FILE_ALREADY_EXIST)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because file name is already present...\n");
                    printf("Please use ls command to check names of all files...\n");
                }
                else if(iRet == ERR_MAX_FILES_OPEN)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because UFDT is FULL..!\n");
                    printf("Please close some opened file...\n");
                }
                else
                {
                    printf("File Successfully created with FD :%d\n",iRet);
                }

            }  // End of if creat

            //Marvellous CVFS : > read 3 10
            else if(strcmp(Command[0],"read") == 0)
            {
                EmptyBuffer = (char *) malloc(atoi(Command[2]));
                
                iRet = read_file(atoi(Command[1]),EmptyBuffer,atoi(Command[2]));

                if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Invalid parameter");
                }
                else if(iRet == ERR_FILE_NOT_EXIST)
                {
                    printf("Error : File not Exist");
                }
                else if(iRet == ERR_INSUFFICIENT_DATA)
                {
                    printf("Error : Insufficient Data");
                }
                else if(iRet == ERR_PERMISSION_DENIED)
                {
                    printf("Error : Permission Denied");
                }
                else
                {
                    printf("Read operation is Successful..\n");
                    printf("Data from file is :\n");
                    printf("%s\n",EmptyBuffer);

                    free(EmptyBuffer);
                }

            } // end of read

            // Marvellous CVFS : > open Demo.txt 3   //  here 3 is mode
            else if(strcmp(Command[0],"open") == 0)
                {                   
                    iRet = open_file(Command[1],atoi(Command[2]));

                    
                    if(iRet == ERR_INVALID_PARAMETER)
                    {
                        printf("Error : Invalid Parameter\n");
                        printf("Please refer manpage for more information\n");
                    }

                    else if(iRet == ERR_FILE_NOT_EXIST)
                    {
                        printf("Error : File not Exist\n");
                    }

                    else if(iRet == ERR_PERMISSION_DENIED)
                    {
                        printf("Error : There is no permission to write the file\n");
                    }
                    else if(iRet == ERR_MAX_FILES_OPEN)
                    {
                        printf("Error : Maximum files opened currently\n");
                    }
                    else
                    {
                        printf("File opened successfully\n");
                        printf("File Descriptor : %d\n",iRet);
                    }
                    
                }

            else 
            {
                
                printf("Command not found\n");
                printf("Please refer help option to get more information\n");
                printf("Please refer manual page of command using man\n");
                
            }


        }// end of if iCount = 3

        else if(iCount == 4)            // for future enhancements
        {
            
        }//End of iCount 4
        
        else 
        {
            printf("Command not found\n");
            printf("Please refer help option to get more information\n");
            printf("Please refer manual page of command using man\n");
            
        }


    }  // end of While


    return 0;
} // End of Main