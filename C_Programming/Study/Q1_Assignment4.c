#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  MultFact
// Output:          Multiplication of Factors of that number
// Description:     Assignment_4: Q.1: Write a program which accept one number from user and display its 
//                                     multiplication of factors
// Date:            22/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int MultFact(int iNo)
{   
    int iCnt = 0;
    int iMult = 1 ;

    //Updator
    if(iNo <= 0)
    {
       iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
            {
                iMult = iMult * iCnt;
            }                         
    }

    return iMult;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
   
    printf("Enter Number : ");    
    scanf("%d",&iValue);
    
    iRet = MultFact(iValue);

    printf("Multiplication of Factors is : %d",iRet);

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N/2)
//where N >=0
////////////////////////////////////////////////////////////////////////////////////
//Input : 12
// Output : 144
// Input : 13
// Output : 1
// Input : 10
// Output : 10
/////////////////////////////////////////////////////////////////////////////////////