#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  TableRev
// Output:          Display Table of that number in reverse order.
// Description:     Assignment_6: Q.5: Write a program which accept number from user & display its table 
//                                      in reverse order.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void TableRev(int iNo)
{
    int iCnt = 0;
   
    //Updater used   
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
       {
            printf("%d\t",iNo*iCnt);              
       }
   
}

int main()
{
    int iValue = 0;
 
        
    printf("Enter number: \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  
//where N = 10
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5
// Output : 50  45  40  35  30  25  20  15  10  5  
// Input : -5
// Output : 50  45  40  35  30  25  20  15  10  5 
// 
/////////////////////////////////////////////////////////////////////////////////////