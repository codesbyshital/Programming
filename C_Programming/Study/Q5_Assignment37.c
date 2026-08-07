///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ToggleNibble
// Description:     Assignment_37 Q.5 :Write a program which accept one number from user and toggle contents
//                  of first and last nibble of the number. Return modified number. (Nibble is agroup of four bits)
//
// Input : 15 
// Output: 4026531840
// Date:            20/07/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned UINT;

#define TRUE 1
#define FALSE 0

UINT ToggleNibble(UINT iNo)
{
    UINT iMask = 0xF000000F;                //First nibble mask = 0x0000000F , Last nibble mask = 0xF0000000    

    iNo = iNo ^ iMask;    //X-OR : ON the bit if OFF & OFF the bit if ON.

    return iNo;
      
}

int main()
{
    UINT iNo = 0;    
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);   

    iRet = ToggleNibble(iNo);

    printf("Modified number is : %u\n", iRet);

    return 0;
}
