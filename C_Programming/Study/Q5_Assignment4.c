#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SumNonFact
// Output:          Factors in descending order(Reverse Order)
// Description:     Assignment_4: Q.5: Write a program which accept one number from user and display its 
//                                     Differrence between Summation of all its Factors & non-factors.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int FactDiff(int iNo)
{   
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonfact = 0;
    int iSumDiff = 0;
    
    //Updator
    if(iNo <= 0)
    {
       iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt; 
        }          
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNonfact = iSumNonfact + iCnt; 
        }          
    }
    
    iSumDiff = iSumFact - iSumNonfact;

    return iSumDiff;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number : ");    
    scanf("%d",&iValue);
    
    iRet = FactDiff(iValue);

    printf("Difference between Summation of Factors & non-factors is: %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N/2)
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 12
// Output : -34     (16-50)
// Input : 10
// Output : -29    (8-37) 
/////////////////////////////////////////////////////////////////////////////////////