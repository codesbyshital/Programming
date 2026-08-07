///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  OnBit
// Description:     Assignment_37 Q.3 :Write a program which accept one number and position from user and on
//                  that bit. Return modified number.
// Input : 10  3
// Output: 14
// Date:            20/07/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned UINT;

#define TRUE 1
#define FALSE 0

UINT OnBit(UINT iNo, UINT iPosition)
{
    UINT iMask = 1;                                     
    
    if((iPosition < 1) || (iPosition > 32))
    {
        return iNo;
    }

    iMask = iMask << (iPosition - 1);       // left shift 

    iNo = iNo | iMask;

    return iNo;
      
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

    iRet = OnBit(iNo, iPos);

    printf("Modified number is : %u\n", iRet);

    return 0;
}
