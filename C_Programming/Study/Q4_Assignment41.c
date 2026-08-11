///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Factorial()
// Description:     Assignment_41: Q.4 :Write a recursive program which accept number from user & return 
//                                      its factorial.
// Input:  5                 
// Output: 120  
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    static ULONG iMul = 1;              // static long int to hold larger number
    
    if(iNo > 0)
    {
        iMul = iMul * iNo;
        iNo--;

        Factorial(iNo);

    }

    return iMul;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is :%lu",iRet);
    
    return 0;
}