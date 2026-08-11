///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  MinDigit()
// Description:     Assignment_42: Q.4 :Write a recursive program which accept number from user & return  
//                                      smallest digit.
// Input:  87984               
// Output: 4
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int MinDigit(int iNo)
{
    int iDigit = 0, iRet = 0;          
      
    if(iNo == 0)
    {
        return 9;
    }

    iDigit = iNo % 10;  
    iRet = MinDigit(iNo / 10);

    if(iDigit < iRet)
    {
        return iDigit;
    }
    else
    {
        return iRet;
    }                          
        
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);
    printf("Smallest Digit from number is :%d",iRet);
    
    return 0;
}