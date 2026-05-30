#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Output:          Display pattern.
// Description:     Assignment_7: Q.1: Write a program which accept number from user and display pattern like 
//                                     * * * * * # # # # #.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    //Updater used
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
       {
            printf("*\t");   
                           
       }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
       {
            printf("#\t");   
                           
       }
    
}

int main()
{
    int iValue = 0;
        
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5
// Output : *   *   *   *   *   #   #   #   #   #
// Input : -3
// Output : *   *   *   #   #   #
// 
/////////////////////////////////////////////////////////////////////////////////////