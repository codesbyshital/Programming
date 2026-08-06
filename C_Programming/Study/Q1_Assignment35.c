///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkBit
// Description:     Assignment_35: Q.1 :Write a program which checks whether 15th Bit is ON or OFF.
// Input : 16384
// Output: 15th Bit is ON
// Input : 26
// Output: 15th Bit is OFF
//            
// Date:            25/06/2026
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
    UINT iMask = 0x4000;   //15th bit 
    UINT iAns = 0;
    
    iAns = iNo & iMask;    // No & mask gives 15th bit ON

    if(iAns == iMask)
    {
        return 1;
    }
    else
    {
        return 0;
    }
   
}

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;
    

    printf("Enter number : \n");
    scanf("%d",&iNo);

    bRet = ChkBit(iNo);

    if(bRet == 1)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    return 0;
}
