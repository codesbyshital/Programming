///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Mult()
// Description:     Assignment_41: Q.5 :Write a recursive program which accept number from user & return 
//                                      its digits product.
// Input:  523                
// Output: 30  
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdio.h>

int Mult(int iNo)
{
    int iDigit = 0;          
    static int iMul = 1;
    
    if(iNo > 0)
    {
        iDigit = iNo % 10;  
        iMul = iMul * iDigit;                       // multiplication of digits
        iNo = iNo / 10;
        Mult(iNo);                              // tail recursion
        
    }

    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);
    printf("Summation of Digits is :%d",iRet);
    
    return 0;
}