///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayN()
// Description: Assignment_43: Q.5 :Write a program which accept file name & one count from
//                                  user & read that number of characters from starting position.
// Input:  Demo.txt   12           
// Output: Display first 12 characters from Demo.txt
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


void DisplayN(char FileName[], int iSize)                // Change in paramter as pointer
{    
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fd = 0, iRead = 0;  
    
    fd  = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
        
    }   
    
    while(iRead < iSize)             // Read data from file till Size entered
    {
        iRet = read(fd,Buffer,1);
        if(iRet <= 0)
        {
            break;
        }
       
        write(1,Buffer,iRet);        // internally calls write() system call

        iRead++;
        
        memset(Buffer,'\0',sizeof(Buffer));         // clear buffer
    }           

    close(fd); 
    
}


int main()
{    
    char Fname[30] = {'\0'};
    int iRet = 0, iValue = 0;
   
    printf("Enter the File name\n");
    scanf("%[^'\n']s",&Fname);

    printf("Enter the number of characters to read\n");
    scanf("%d",&iValue);               
    
    DisplayN(Fname,iValue);        

    return 0;
}