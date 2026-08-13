///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FileOperations()
// Description:     Assignment_44: Q.1 :Write application which accept file name from user & open that
//                                      file in read mode.
// Input:  Demo.txt               
// Output: File opened Successfully.
//          
// Date:            30/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>
#include<string.h>



void FileOperations(char FileName[])       
{    
    int fd = 0;         //file descripter 

    fd  = open(FileName,O_RDONLY);          // file opened in read mode

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;                  
    }
    else
    {
        printf("File opened Successfully..");
    }
  
    close(fd);                  // closed file.
}


int main()
{    
    char Fname[30] = {'\0'};

    int iRet = 0;

    printf("Enter the File name\n");
    scanf("%[^'\n']s",&Fname);

    FileOperations(Fname);
    

    return 0;
}