#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SumNonFact
// Output:          Factors in descending order(Reverse Order)
// Description:     Assignment_4: Q.4: Write a program which accept one number from user and display its 
//                                     Summation of its non-factors.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int SumNonFact(int iNo)
{   
    int iCnt = 0;
    int iSum = 0;
    
    //Updator
    if(iNo <= 0)
    {
       iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt; 
        }          
    }
    
    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number : ");    
    scanf("%d",&iValue);
    
    iRet = SumNonFact(iValue);

    printf("Summation of non-factors is: %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 6
// Output : 9     (4+5)
// Input : 12
// Output : 50    (5+7+8+9+10+11) 
/////////////////////////////////////////////////////////////////////////////////////