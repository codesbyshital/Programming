///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description:     Assignment_39: Q.3 :Write a recursive program which display below pattern.
//                  
// Output: 5    4   3   2   1  
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
        printf("%d\t",iNo);
        iNo--;
        
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