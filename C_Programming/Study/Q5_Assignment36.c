///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  OffBit
// Description:     Assignment_36 Q.5:Write a program which accept one number from user and on its first 4 bits. 
//                                     Return modified number.
// Input : 73
// Output: 79
//
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
    UINT iMask = 0x0000000F;                   //0000 1111    : first 4 bits ON
                              
    iNo = iNo | iMask;                 

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
