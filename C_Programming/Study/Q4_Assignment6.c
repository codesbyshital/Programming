#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Table
// Output:          Display Table of that number.
// Description:     Assignment_6: Q.4: Write a program which accept number from user & display its table.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void Table(int iNo)
{
    int iCnt = 0;
   
    //Updater used   
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
       {
            printf("%d\t",iNo*iCnt);              
       }
   
}

int main()
{
    int iValue = 0;
 
        
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  
//where N = 10
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5
// Output : 5   10  15  20  25  30  35  40  45  50  
// Input : -5
// Output : 5   10  15  20  25  30  35  40  45  50 
// 
/////////////////////////////////////////////////////////////////////////////////////