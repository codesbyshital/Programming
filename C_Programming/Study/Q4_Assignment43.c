///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountChar()
// Description: Assignment_43: Q.4 :Write a program which accept file name & one character from
//                                  user & count number of occurances of that character from that file.
// Input:  Demo.txt   'F'            
// Output: Frequency of character is : 13
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


int CountChar(char FileName[], char ch)                // Change in paramter as pointer
{    
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fd = 0, iCountchar = 0, i = 0;  
    
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
            if(Buffer[i] == ch )
            iCountchar++;
        }
        
        memset(Buffer,'\0',sizeof(Buffer));         // clear buffer
    }               
    return iCountchar;

    close(fd); 
    
}


int main()
{    
    char Fname[30] = {'\0'};
    int iRet = 0;
    char cValue;

    printf("Enter the File name\n");
    scanf("%[^'\n']s",&Fname);

    printf("Enter the character\n");
    scanf(" %c",&cValue);               //%c reads the leftover newline ('\n') from the input buffer instead of the character so used space before %c
    
    iRet = CountChar(Fname,cValue);

    if(iRet == ERR_OPEN)
        {
            printf("Unable to open file\n");
        }
        else
        {
            printf("Frequency of character is : %d\n",iRet);
        }
    

    return 0;
}