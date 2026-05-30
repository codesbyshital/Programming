#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RangeSum
// Output:          
// Description:     Assignment_11: Q.3  : Write a program which accept Range from user & return addition of all numbers  
//                                        in between that range. (Range should contains positive numbers only)    
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int RangeSum(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
     
    if(iStart < 0 || iEnd < 0 || iEnd < iStart)
    {
        return -1;        
    }
     else
     {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
       {
            iSum = iSum + iCnt;                 
       }
     }  
    

    return iSum;
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
        
    printf("Enter Starting point: \n");
    scanf("%d", &iValue1);

    printf("Enter ending point: \n");
    scanf("%d", &iValue2);
      
    iRet = RangeSum(iValue1,iValue2);
   if(iRet == -1)
    {
        printf("Invalid Range \n");
    }
    else
    {
        printf("Addition of Even number is: %d", iRet);
    }
           
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Range of that number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 23 30
// Output : 212 
// Input : 10 18
// Output : 126
// Input : -10 2
// Output : Invalid Range
// Input : 90 18
// Output : Invalid Range
// 
/////////////////////////////////////////////////////////////////////////////////////