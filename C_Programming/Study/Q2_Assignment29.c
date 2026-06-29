///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkCapital
// Description:     Assignment_29: Q.2 :Accept a character from user & check whether it is Capital or not(A-Z).                                       
// Input : F        
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
BOOL ChkCapital(char ch)
{
    BOOL bFlag = FALSE;

    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital character\n");
    }
    else
    {
        printf("It is not Capital character\n");
    }

    return 0;
}


