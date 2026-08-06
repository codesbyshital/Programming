///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkBit
// Description:     Assignment_35: Q.4 :Write a program which checks whether 7th, 8th,9th Bit is ON or OFF.
// Input : 448
// Output: 7th bit is ON
//         8th bit is ON
//         9th bit is ON
// Input : 128
// Output: 7th bit is OFF
//         8th bit is ON
//         9th bit is OFF         
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

void ChkBit(UINT iNo)
{
    UINT iMask1 = 0x40;         //7th bit 
    UINT iMask2 = 0x80;         //8th bit
    UINT iMask3 = 0x100;        //9th bit
  
    
    if((iNo & iMask1) == iMask1)
    {
        printf("7th bit is ON\n");
    }
    else 
    {
        printf("7th bit is OFF\n");
    }

    if((iNo & iMask2) == iMask2)
    {
        printf("8th bit is ON\n");
    }
    else 
    {
        printf("8th bit is OFF\n");
    }
    
    if((iNo & iMask3) == iMask3)
    {
        printf("9th bit is ON\n");
    }
    else 
    {
        printf("9th bit is OFF\n");
    }
   
}

int main()
{
    int iNo = 0; 

    printf("Enter number : \n");
    scanf("%d",&iNo);

    ChkBit(iNo);

    return 0;
}
