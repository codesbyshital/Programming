///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  WriteAtEnd()
// Description:     Assignment_44: Q.5 :Write application which accept file name & one string from user & 
//                                      write that sting at the end of file.
// Input:  Demo.txt  
//         Hello World              
// Output: Write Hello Wolrd at the end of Demo.txt.
//          
// Date:            30/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

void WriteAtEnd(char FileName[], char Str[])                
{    
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fd = 0;    
    

    fd  = open(FileName, O_WRONLY | O_APPEND);            // file opened in Write / Append mode

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    
    iRet = write(fd,Str, strlen(Str));

    if(iRet == -1)
    {
        printf("Unable to write data\n");
    }
    else
    {
        printf("String written successfully at the end of file\n");
    } 

    close(fd);

}


int main()
{    
    char Fname[100] = {'\0'};
    char Str[200] = {'\0'};
 
    printf("Enter the File name\n");
    scanf(" %[^'\n']s",Fname);

    printf("Enter the String to append in file\n");
    scanf(" %[^'\n']s",Str);

    WriteAtEnd(Fname,Str);   
    

    return 0;
}