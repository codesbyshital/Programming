///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FileOperations()
// Description:     Assignment_44: Q.2 :Write application which accept file name from user & create that
//                                      file.
// Input:  Demo.txt               
// Output: File created Successfully.
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
    int fd = 0;                             //file descripter 

    fd = creat(FileName,0777);       // create file with permissions : read-write-excecute

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully created with fd :%d\n",fd);
    }

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