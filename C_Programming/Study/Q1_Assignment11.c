
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RangeDisplay
// Output:          Display numbers from that range
// Description:     Assignment_11: Q.1  : Write a program which accept Range from user & Display all numbers  
//                                        in between that range .    
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;
       
    printf("Range Display :\n");
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
       {
            printf("%d\t",iCnt);                  
       }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
        
    printf("Enter Starting point: \n");
    scanf("%d",&iValue1);

    printf("Enter ending point: \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Range of that number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 23 35
// Output : 23  24  25  26  27  28  29  30  31  32  33  34  35 
// Input : 10 18
// Output : 10  11  12  13  14  15  16  17  18
// Input : 10 10
// Output : 10  
// Input : -10 2
// Output : -10  -9  -8  -7  -6  -5  -4  -3  -2   -1    0   1   2
// 
/////////////////////////////////////////////////////////////////////////////////////