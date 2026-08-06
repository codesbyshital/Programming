///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ToggleBit
// Description:     Assignment_36 Q.3 :Write a program which accept one number from user and toggle 7th 
//                                     bit of that number. Return modified number.
// Input : 137
// Output: 201
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

int ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;                   //7th  bit     
                              
    iNo = iNo ^ iMask;                  // If the 7th bit is ON, it becomes OFF, If the 7th bit is OFF, it becomes ON

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
