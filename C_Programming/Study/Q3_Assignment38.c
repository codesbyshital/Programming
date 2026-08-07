///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CheckBit
// Description:     Assignment_38 Q.3 :Write a program which accept one number from user and check whether
//                  9th or 12th bit is on or off.
// Input : 257
// Output: TRUE
// Date:            21/07/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00000900;   //9th & 12th bit     
    
    if((iNo & iMask) != 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
   
}

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;    

    printf("Enter number : \n");
    scanf("%d",&iNo);

    bRet = ChkBit(iNo);

    if(bRet == TRUE)
    {
        printf("Either 9th or 12th bit is ON\n");
    }
    else
    {
        printf("5th & 18th bit is OFF\n");
    }

    return 0;
}
