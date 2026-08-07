///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountONBits
// Description:     Assignment_38 Q.1 :Write a program which accept one number from user and count number of
//                  ON (1) bits in it without using % and / operator.
// Input : 15
// Output: 4
// Date:            21/07/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned UINT;

#define TRUE 1
#define FALSE 0

UINT CountONBits(UINT iNo)
{
    UINT iCount = 0;                                      
   
    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iCount++;
        }

        iNo = iNo >> 1;
    }

    return iCount;    
      
}


int main()
{
    UINT iNo = 0;
    int iPos = 0; 
    BOOL iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);    

    iRet = CountONBits(iNo);

    printf("Number of ON bits are : %u\n",iRet);

    return 0;
}
