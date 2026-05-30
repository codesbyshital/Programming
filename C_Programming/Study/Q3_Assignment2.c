#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Output:          5 times *
// Description:     Assignment_2: Q.3: Accept one number from user if number is less than 10 then 
//                                     print "Hello" otherwise print "Demo"               
// Date:            22/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    
   if(iNo<10)
    {
        printf("Hello");        
    }
    else
    {
        printf("Demo");
    }
    
}

int main()
{
    int iValue = 0;
            
    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : NA
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5
// Output : Hello
// Input : 15
// Output : Demo
// 
/////////////////////////////////////////////////////////////////////////////////////