///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Description:     Assignment_30: Q.4 :Accept charater from user and check whether it is special symbol or not  
//                  (!,@,#,$,%,^,&,*)
// Input :%
// Output:It is Special Symbol
// Input :d
// Output:It is not Special Symbol
//
// Date:            23/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    BOOL bFlag = FALSE;

    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        bFlag = TRUE;
    }    
        return bFlag;
   
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Symbol\n");
    }
    else
    {
        printf("It is not a Special Symbol\n");
    }

    return 0;
}