///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountWhite()
// Description:     Assignment_43: Q.3 :Write a program which accept file name from user & count 
//                                      number of white spaces from that file.
// Input:  Demo.txt               
// Output: Number of White spaces are : 7
//          
// Date:            30/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<fcntl.h>
#include<string.h>


#define BUFFER_SIZE 1024            // Macro for BUFFER_SIZE
#define ERR_OPEN -1                 // Macro for ERR_OPEN replace -1


int CountWhite(char FileName[])                // Change in paramter as pointer
{    
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fd = 0, iCountWhite = 0, i = 0;  

    
    fd  = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return ERR_OPEN;                  // macro
    }
    
    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)  // Read data from file till end
    {
        
        for(i = 0;i < iRet; i++)
        {
            if(Buffer[i] == ' ' )
            iCountWhite++;
        }
        
        memset(Buffer,'\0',sizeof(Buffer));         // clear buffer
    }               
    return iCountWhite;

    close(fd); 
    
}


int main()
{    
    char Fname[30] = {'\0'};

    int iRet = 0;

    printf("Enter the File name\n");
    scanf("%[^'\n']s",&Fname);

    iRet = CountWhite(Fname);

    if(iRet == ERR_OPEN)
        {
            printf("Unable to open file\n");
        }
        else
        {
            printf("Number of White Spaces are : %d\n",iRet);
        }
    

    return 0;
}