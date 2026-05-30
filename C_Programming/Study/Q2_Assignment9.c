#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountOdd
// Output:          Count of Odd digits
// Description:     Assignment_9: Q.2: Write a program which accept Number from User & return count of Odd Digits.
//                                     
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

   
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iCnt++;
        }

        iNo = iNo /10;
    }
    
    return  iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
        
    printf("Enter Number: \n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("Count of Odd Digits is : %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = length of number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 2395
// Output : 3  
// Input : 1018
// Output : 2
// Input : -1018
// Output : 2
// 
/////////////////////////////////////////////////////////////////////////////////////