#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  MultipleDisplay
// Output:          Display first 5 multiples of number
// Description:     Assignment_5: Q.5: Write a program which accept N and print first 5 multiples of N.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    //Updater used
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
       {
            printf("%d\t",iNo * iCnt);
       }
    
}

int main()
{
    int iValue = 0;
        
    printf("Enter number: \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)
//where N = 5
/////////////////////////////////////////////////////////////////////////////////////
// Input : 4
// Output : 4   8   12  16  20  
// 
/////////////////////////////////////////////////////////////////////////////////////