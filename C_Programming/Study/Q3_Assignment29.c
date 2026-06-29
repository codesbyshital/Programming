///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkDigit
// Description:     Assignment_29: Q.3 :Accept a character from user & check whether it is digit or not(0-9).                                       
// Input : 7        
// Output: True
// Input:  d 
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
BOOL ChkDigit(char ch)
{
    BOOL bFlag = FALSE;

    if(ch >= '0' && ch <= '9')
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

    printf("Enter the Digit\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not Digit\n");
    }

    return 0;
}


