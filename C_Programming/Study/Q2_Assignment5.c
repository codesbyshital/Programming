#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Output:          Display numbers upto that number
// Description:     Assignment_5: Q.2: Write a program which accept number from user and print numbers till that numaber
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
            printf("%d\t",iCnt);                  
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
// Input : 8
// Output : 1   2   3   4   5   6   7   8
// 
/////////////////////////////////////////////////////////////////////////////////////