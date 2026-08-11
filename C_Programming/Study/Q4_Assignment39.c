///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description:     Assignment_39: Q.4 :Write a recursive program which display below pattern.
//                  
// Output: A    B   C   D   E   F  
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'A';

    if( iNo != 0 )
    {
        printf("%c\t",ch);
        iNo--;
        ch++;
        
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