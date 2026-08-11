///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description:     Assignment_41: Q.1 :Write a recursive program which accept number from user & display 
//                                      below pattern.
// Input:  5                 
// Output: 5    *   4   *   3   *   2   *   1   *   
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{              
    if( iNo != 0 )
    {
        printf("%d\t*\t",iNo);
        iNo--;
        Display(iNo);               // recursive call
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);    
           
    return 0;
}