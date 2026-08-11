///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Summation()
// Description:     Assignment_41: Q.2 :Write a recursive program which accept number from user & return 
//                                      summation of its digits.
// Input:  879                 
// Output: 24  
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Summation(int iNo)
{
    int iDigit = 0;          
    static int iSum = 0;
    
    if(iNo > 0)
    {
        iDigit = iNo % 10;  
        iSum = iSum + iDigit;                       // sum of digits
        iNo = iNo / 10;
        Summation(iNo);                              // tail recursion
        
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Summation of Digits is :%d",iRet);
    
    return 0;
}