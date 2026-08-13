///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CalculateFileSize()
// Description:     Assignment_44: Q.4 :Write application which accept file name from user & display
//                                      size of file.
// Input:  Demo.txt               
// Output: Size of file is : 1402 Bytes.
//          
// Date:            30/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CalculateFileSize(char FileName[])                
{    
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fd = 0;    
    int iSize = 0;

    fd  = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return iSize;
    }
    
    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {        
        iSize = iSize + iRet;                   // counting the file size.          
        
    }
    
    close(fd);

    return iSize;
}


int main()
{    
    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter the File name\n");
    scanf("%[^'\n']s",&Fname);

    iRet = CalculateFileSize(Fname);

    printf("Size of file is: %d Bytes\n",iRet);
    

    return 0;
}