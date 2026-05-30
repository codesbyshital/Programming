#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Output:          5 times $ *
// Description:     Assignment_5: Q.1: Write a program which accept number from user and print that number of $ & * on screen.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
    int iCnt = 0;

    //Updater used
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
       {
            printf("$\t*\t");                  
       }
    
}

int main()
{
    int iValue = 0;
        
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5
// Output : $   *   $   *   $   *   $   *   $   *
// Input : 3
// Output : $   *   $   *   $   *   $   *
// Input : -3
// Output : $   *   $   *   $   *   $   *
// 
/////////////////////////////////////////////////////////////////////////////////////