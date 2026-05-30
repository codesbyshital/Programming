#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  NumberX
// Output:          Check whether number is Samll / Medium / Large.
// Description:     Assignment_6: Q.1: Write a program which accept number from user and if number is less than 
//                                     50 then print small, if it is greater than 50 & less than 100 then print 
//                                     Medium and if it is grater than 100 then print large.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void NumberX(int iNo)
{
    if(iNo < 50)
        {
            printf("Small");
        }
    else if(iNo >= 50 && iNo < 100)
        {
            printf("Medium");
        }
    else
        {
            printf("Large");
        }

}

int main()
{
    int iValue = 0;
        
    printf("Enter number: \n");
    scanf("%d",&iValue);

    NumberX(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : NA
/////////////////////////////////////////////////////////////////////////////////////
// Input : 75
// Output : Medium  
// 
/////////////////////////////////////////////////////////////////////////////////////