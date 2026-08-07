///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CommonBits
// Description:     Assignment_38 Q.2 : Write a program which accept two numbers from user and display position
//                                      of common ON bits from that two numbers.
// Input : 10 15    (1010 1111)
// Output: 2  4
// Date:            21/07/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned UINT;

#define TRUE 1
#define FALSE 0

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT Result = 0;
    int iPos = 1;

    Result = iNo1 & iNo2;

    if(Result == 0)
    {
        printf("No common ON bits found.\n");
        return;
    }

    printf("Common ON bits are at positions : ");

    while(Result != 0)
    {
        if((Result & 1) == 1)
        {
            printf("%d ", iPos);
        }

        Result = Result >> 1;
        iPos++;
    }

    printf("\n"); 
      
}


int main()
{
    UINT iValue1 = 0, iValue2 = 0;
    int iPos = 0; 
   
    printf("Enter first number : \n");
    scanf("%d",&iValue1);
    
    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
}
