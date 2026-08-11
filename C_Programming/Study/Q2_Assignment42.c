///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  MaxDigit()
// Description:     Assignment_42: Q.2 :Write a recursive program which accept number from user & return  
//                                      largest digit.
// Input:  87984               
// Output: 9
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int MaxDigit(int iNo)
{
    int iDigit = 0;          
    static int iMax = 0;
    
    if(iNo > 0)
    {
        iDigit = iNo % 10;  
        if(iDigit > iMax)                      // if digit is greater than imax
        {
            iMax = iDigit;              // preserve max value of digit in iMax 
        }
        iNo = iNo / 10;
        MaxDigit(iNo);                              // tail recursion        
    }

    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = MaxDigit(iValue);
    printf("Largest Digit from number is :%d",iRet);
    
    return 0;
}