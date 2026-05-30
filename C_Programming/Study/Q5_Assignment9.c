#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountMult
// Output:          
// Description:     Assignment_9: Q.4: Write a program which accept Number from user & return differrence between 
//                                  summation of even digits and summation of odd digits.    
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;
    int iOddCnt = 0;
    int iSumDiff = 0;

   
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEvenCnt++;
        }

        if(iDigit % 2 != 0)
        {
            iOddCnt++;
        }

        iSumDiff = iEvenCnt - iOddCnt;

        iNo = iNo /10;
    }
    
    return  iSumDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
        
    printf("Enter Number: \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Differrence between Summation of Digits is : %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = length of Number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 2395
// Output : -15  (2-17)  
// Input : 1018
// Output : 6   (8-2)
// 
/////////////////////////////////////////////////////////////////////////////////////