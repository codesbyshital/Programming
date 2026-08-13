///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayFile()
// Description:     Assignment_44: Q.3 :Write application which accept file name from user & read all data
//                                      from that file & Display contents on screen.
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

#define BUFFER_SIZE 1024

void DisplayFile(char *FileName)           
{    
    char Buffer[BUFFER_SIZE] = {'\0'};    // buffer to read file
    int iRet = 0, fd = 0;    

    fd  = open(FileName,O_RDONLY);

    if(iRet == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    
    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        write(1,Buffer,iRet);                        // display contents on screen : internally calls write() system call
        
        memset(Buffer,'\0',sizeof(Buffer));         // clear buffer
    }

    close(fd);
}


int main()
{    
    char Fname[30] = {'\0'};

    int iRet = 0;

    printf("Enter the File name\n");
    scanf("%[^'\n']s",&Fname);

    DisplayFile(Fname);    

    return 0;
}