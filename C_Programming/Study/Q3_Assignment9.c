#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountRange
// Output:          
// Description:     Assignment_9: Q.3: Write a program which accept Number & return the count of Digits in between 3 & 7. 
//                                     
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

   
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountRange(iValue);

    printf("Count of Digits in between 3 & 7 is : %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = length of number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 2395
// Output : 1  
// Input : 1018
// Output : 0
// 
/////////////////////////////////////////////////////////////////////////////////////