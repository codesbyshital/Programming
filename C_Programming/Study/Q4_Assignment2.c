#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Output:          5 times *
// Description:     Assignment_2: Q.4: Accept two numbers from user and Display first number in second number of times.                             
// Date:            22/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    //Updater used
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d ",iNo);
    }
        
}

int main()
{
    int iValue = 0;
    int iCount = 0;
        
    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter Frequency\n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 12 5
// Output : 12 12 12 12 12
// Input : -2 3
// Output : -2 -2 -2
// Input : 21 -3
// Output : 21 21 21
// Input : -2 0
// Output : 
// 
/////////////////////////////////////////////////////////////////////////////////////