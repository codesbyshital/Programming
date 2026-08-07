///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkBit
// Description:     Assignment_38 Q.4 : Write a program which accept one number , two positions from user and
//                                      check whether bit at first or bit at second position is ON or OFF.
// Input : 127 3 7
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

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;

    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        return FALSE;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    if(((iNo & iMask1) == iMask1) || ((iNo & iMask2) == iMask2))
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
    UINT iNo = 0;
    int iPos1 = 0, iPos2 = 0;
    BOOL bRet = FALSE;    

    printf("Enter number : \n");
    scanf("%u",&iNo);

    printf("Enter first position : ");
    scanf("%d", &iPos1);

    printf("Enter second position : ");
    scanf("%d", &iPos2);

    bRet = ChkBit(iNo,iPos1,iPos2);

    if(bRet == TRUE)
    {
        printf("Either bit is ON\n");
    }
    else
    {
        printf("Both bits are OFF\n");
    }

    return 0;
}
