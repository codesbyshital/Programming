/////////////////////////////////////////////////////////////////////////////////////
//
//  Include Required header files 
//  Creates a new name (alias) for the existing data type int as BOOL
//  Define Macros TRUE & FALSE
//
/////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Check
// Output:          Number is Divisible by 5  / Number is not Divisible by 5
// Description:     Assignment_1 : Q.4: Accept one number and check whether it is divisible by 5 or not.
// Date:            22/05/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
    
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is not Divisible by 5");
    }

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : NA
/////////////////////////////////////////////////////////////////////////////////////
// Input : 15
// Output : Number is Divisible by 5
// Input : 6
// Output : Number is not Divisible by 5
// 
/////////////////////////////////////////////////////////////////////////////////////