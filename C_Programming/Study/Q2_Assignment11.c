#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RangeDisplayEven
// Output:          Display Even numbers from that range
// Description:     Assignment_11: Q.2  : Write a program which accept Range from user & Display all Even numbers  
//                                        in between that range .    
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt = 0;
       
    printf("Even Range Display :\n");
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
       {
            if(iCnt % 2 == 0)
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
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Range of that number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 23 35
// Output : 24  26  28  30  32  34 
// Input : 10 18
// Output : 10  12  14  16 18
// Input : 10 10
// Output : 10  
// Input : -10 2
// Output : -10  -8  -6  -4  -2   0   2
// 
/////////////////////////////////////////////////////////////////////////////////////