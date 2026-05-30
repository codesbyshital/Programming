#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RevDisplay
// Output:          Display Range in reverse Order
// Description:     Assignment_11: Q.5  : Write a program which accept Range from user & Display all numbers in between  
//                                        that range in reverse order. 
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void RevDisplay(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
       
    //Updater Used
    if(iEnd < iStart)
    {
        printf("Invalid Range \n");
    }
    
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
       {
            printf("%d\t",iCnt);
                            
       }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    
    printf("Enter Starting point: \n");
    scanf("%d", &iValue1);

    printf("Enter ending point: \n");
    scanf("%d", &iValue2);

    RevDisplay(iValue1,iValue2);
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Range of that number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 10 18
// Output : 18  17  16  15  14  13  12  11  10 
// Input : 10 10
// Output : 10
// Input : -10 2
// Output : 2   1   0   -1  -2  -3  -4  -5  -6  -7  -8  -9  -10
// Input : 90 18
// Output : Invalid Range
// 
/////////////////////////////////////////////////////////////////////////////////////