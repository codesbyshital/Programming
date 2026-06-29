///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkSmall
// Description:     Assignment_29: Q.4 :Accept a character from user & check whether it is Small case or not(a-z).                                       
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
BOOL ChkSmall(char ch)
{
    BOOL bFlag = FALSE;


    if(ch >= 'a' && ch <= 'z')
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

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case letter\n");
    }
    else
    {
        printf("It is not Small case letter\n");
    }

    return 0;
}


