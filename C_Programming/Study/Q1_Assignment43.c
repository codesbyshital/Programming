///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountCapital()
// Description:     Assignment_43: Q.1 :Write a program which accept file name from user & count 
//                                      number of capital characters from that file.
// Input:  Demo.txt               
// Output: NUmber of Capital Letters are : 13
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


int CountCapital(char FileName[])                // Change in paramter as pointer
{    
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fd = 0, i = 0, iCountCapital = 0;    

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
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
            iCountCapital++;
        }
        
        memset(Buffer,'\0',sizeof(Buffer));         // clear buffer
    }

    return iCountCapital;

    close(fd);
}


int main()
{    
    char Fname[30] = {'\0'};

    int iRet = 0;

    printf("Enter the File name\n");
    scanf("%[^'\n']s",&Fname);

    iRet = CountCapital(Fname);

    if(iRet == ERR_OPEN)
        {
            printf("Unable to open file\n");
        }
        else
        {
            printf("Number of Capital letter are : %d\n",iRet);
        }
    

    return 0;
}