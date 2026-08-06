///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkBit
// Description:     Assignment_35: Q.5 :Write a program which checks whether 1st & last bit is ON or OFF. First bit  
//                                      means Bit number 1 and last means bit number 32.
// Input : 1
// Output: First bit is ON
//         Last bit is ON
// Input : 128
// Output: First bit is OFF
//         Last bit is ON 
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
    UINT iMask1 = 0x1;         //1st bit 
    UINT iMask2 = 0x80000000000000000000000000000000;         //last bit :32nd bit
    
     
    if((iNo & iMask1) == iMask1)
    {
        printf("First bit is ON\n");
    }
    else 
    {
        printf("First bit is OFF\n");
    }

    if((iNo & iMask2) == iMask2)
    {
        printf("Last (32nd) bit is ON\n");
    }
    else 
    {
        printf("Last (32nd) bit is OFF\n");
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
