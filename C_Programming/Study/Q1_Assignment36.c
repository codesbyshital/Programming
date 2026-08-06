///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  OffBit
// Description:     Assignment_36 Q.1 :Write a program which accept one number from user and off 7th bit of that number  
//                                      if it is ON. Return modified  Number.
// Input : 79
// Output: 15
// Input : 100
// Output: 36
// Date:            10/07/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned UINT;

#define TRUE 1
#define FALSE 0

int OffBit(UINT iNo)
{
    UINT iMask = 0x00000040;                                     //7th bit 
    
    if((iNo & iMask) == iMask)                          // Check if 7th bit is ON
    {
        iNo = iNo & (~iMask);                            // OFF the 7th bit
    }

    return iNo;
    
    
      
}

int main()
{
    int iNo = 0, iRet = 0; 

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iRet = OffBit(iNo);
    printf("Modified number is : %u\n", iRet);

    return 0;
}
