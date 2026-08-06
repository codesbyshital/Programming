///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkBit
// Description:     Assignment_35: Q.2 :Write a program which checks whether 5th & 18th Bit is ON or OFF.
// Input : 131092
// Output: 5th & 18th Bit is ON
// Input : 225
// Output: 5th & 18th Bit is OFF          
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
    UINT iMask = 0x00020010;   //5th & 18th bit 
    UINT iAns = 0;
    
    iAns = iNo & iMask;   

    if(iAns == iMask)
    {
        return 1;   //Both bits are ON
    }
    else
    {
        return 0;   // One or Both bits OFF
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
        printf("5th & 18th bit is ON\n");
    }
    else
    {
        printf("5th & 18th bit is OFF\n");
    }

    return 0;
}
