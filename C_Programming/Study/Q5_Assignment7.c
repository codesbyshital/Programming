#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FactorialDiff
// Output:          Differrence between Even & Odd Factorial of number.
// Description:     Assignment_7: Q.4: Write a program to find differrence between Even & Odd Factorial of given number 
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFactorial = 1;
    int iOddFactorial = 1;
    int iDiffFactorial = 0;

    //Updater used   
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
       {
            if(iCnt % 2 == 0)
            {
                iEvenFactorial = iEvenFactorial * iCnt;
            }
                             
       }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
       {
            if(iCnt % 2 != 0)
            {
                iOddFactorial = iOddFactorial * iCnt;
            }
                             
       }

    iDiffFactorial = iEvenFactorial - iOddFactorial;

    return  iDiffFactorial;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
        
    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Differrence is : %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(2N)  
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5
// Output : -7   (8-15)  
// Input : -5
// Output : -7   (8-15) 
// Input : 10
// Output : 2895   (3840 - 945)
// 
/////////////////////////////////////////////////////////////////////////////////////