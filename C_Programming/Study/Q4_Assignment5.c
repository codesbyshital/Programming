#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  OddDisplay
// Output:          Display odd numbers upto that number
// Description:     Assignment_5: Q.4: Write a program which accept N from user and print all Odd numbers upto N.  
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void OddDisplay(int iNo)
{
    int iCnt = 0;

    //Updater used
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
       {
            if(iCnt % 2 != 0) 
            {
                printf("%d\t",iCnt);
            }                 
       }
    
}

int main()
{
    int iValue = 0;
        
    printf("Enter number: \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 4
// Output : -4   -3   -2   -1   0   1   2   3   4
// 
/////////////////////////////////////////////////////////////////////////////////////