///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  OffBit
// Description:     Assignment_36 Q.4:Write a program which accept one number from user and toggle 7th & 10th 
//                                     bit of that number. Return modified number.
// Input : 137
// Output: 713
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
    UINT iMask = 0x00000240;                   //7th & 10th bit     
                              
    iNo = iNo ^ iMask;                 // toggle both 7th & 10th bit

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
