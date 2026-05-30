#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountMult
// Output:          
// Description:     Assignment_9: Q.4: Write a program which accept Number & return the multiplication of all digits. 
//                                     
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int CountMult(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

   
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;

        iNo = iNo /10;
    }
    
    return  iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
        
    printf("Enter Number: \n");
    scanf("%d", &iValue);

    iRet = CountMult(iValue);

    printf("Multiplication of Digits is : %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = length of Number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 922432
// Output : 864  
// Input : 2395
// Output : 270
// 
/////////////////////////////////////////////////////////////////////////////////////