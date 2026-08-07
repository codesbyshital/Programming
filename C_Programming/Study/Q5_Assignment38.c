///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ToggleBitRange
// Description:     Assignment_38 Q.5 : Write a program which accept one number from user and range of
//                                      positions from user. Toggle all bits from that range.
// Input : 897 9 13
// Output: 7297  (Toggle all bits from position 9 to 13 of input number ie 879.)
// Date:            21/07/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned UINT;

#define TRUE 1
#define FALSE 0

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;
    int i = 0;

    // Validate positions
    if((iStart < 1) || (iEnd > 32) || (iStart > iEnd))
    {
        return iNo;
    }

    for(i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }

    iNo = iNo ^ iMask;

    return iNo;
    
   
}

int main()
{
    UINT iNo = 0;
    UINT iRet = 0;
    int StartPos = 0, EndPos = 0;      

    printf("Enter number : \n");
    scanf("%u",&iNo);

    printf("Enter starting position : ");
    scanf("%d", &StartPos);

    printf("Enter ending position : ");
    scanf("%d", &EndPos);

    iRet = ToggleBitRange(iNo,StartPos,EndPos);

    printf("Modified number is : %u\n", iRet);

    return 0;
}
