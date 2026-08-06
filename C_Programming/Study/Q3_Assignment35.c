///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkBit
// Description:     Assignment_35: Q.3 :Write a program which checks whether 7th, 15th, 21st,28th Bit is ON or OFF.
// Input : 3425
// Output: 7th bit is ON
//         15th bit is OFF
//         21st bit is OFF
//         28th bit is ON
// Input : 16386
// Output: 7th bit is OFF
//         15th bit is ON
//         21st bit is OFF
//         28th bit is ON      
// Input : 1048578
// Output: 7th bit is OFF
//         15th bit is OFF
//         21st bit is ON
//         28th bit is ON     
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
    UINT iMask2 = 0x4000;       //15th bit
    UINT iMask3 = 0x100000;     //21st bit
    UINT iMask4 = 0x08000000;   //28th bit  
    

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
        printf("15th bit is ON\n");
    }
    else 
    {
        printf("15th bit is OFF\n");
    }
    
    if((iNo & iMask3) == iMask3)
    {
        printf("21st bit is ON\n");
    }
    else 
    {
        printf("21st bit is OFF\n");
    }
    
    if((iNo & iMask4) == iMask4)
    {
        printf("28th bit is ON\n");
    }
    else
    {
        printf("28th bit is ON\n");
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
