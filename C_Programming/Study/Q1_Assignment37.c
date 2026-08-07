///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkBit
// Description:     Assignment_37 Q.1 :Write a program which accept one number and position from user and check whether
//                  bit at that position is on or off. If bit is one return TURE otherwise return FALSE.
// Input : 10  2
// Output: TRUE
// Date:            20/07/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, UINT iPosition)
{
    UINT iMask = 1;                                     
    
    if((iPosition < 1) || (iPosition > 32))
    {
        return FALSE;
    }

    iMask = iMask << (iPosition - 1);       // left shift 

    if((iNo & iMask) == iMask)
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
    int iPos = 0; 
    BOOL iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    printf("Enter position : \n");
    scanf("%d",&iPos);

    iRet = ChkBit(iNo, iPos);

    if(iRet == TRUE)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}
