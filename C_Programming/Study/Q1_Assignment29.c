///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkAlpha
// Description:     Assignment_29: Q.1 :Accept a character from user & check whether it is alphabet or not(A-Za-z).                                       
// Input : F        
// Output: True
// Input:  & 
// Output: False       
//          
// Date:            15/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkAlpha(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        bFlag = TRUE;
    }
    else
    {
        return bFlag;
    }

    return bFlag;

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character\n");
    }
    else
    {
        printf("It is not a character\n");
    }

    return 0;
}


