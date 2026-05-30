#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountEven
// Output:          Count of even digits
// Description:     Assignment_9: Q.1: Write a program which accept Number & return the count of even Digits. 
//                                     
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

   
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
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

    iRet = CountEven(iValue);

    printf("Count of Even Digits is : %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = length of number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 2395
// Output : 1  
// Input : 1018
// Output : 2
// Input : -1018
// Output : 2
// 
/////////////////////////////////////////////////////////////////////////////////////