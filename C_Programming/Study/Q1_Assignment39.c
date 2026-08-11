///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description:     Assignment_39: Q.1 :Write a recursive program which display below pattern.
//                  
// Output: *   *   *   *   *   
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;                 // static is compulsary
          
    if( i <= iNo )
    {
        printf("*\t");
        i++;
        Display(iNo);               // recursive call
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the frequency\n");
    scanf("%d",&iValue);

    Display(iValue);    
           
    return 0;
}