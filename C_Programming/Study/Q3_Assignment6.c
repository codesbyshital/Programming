#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Factorial
// Output:          Find factorial of given number.
// Description:     Assignment_6: Q.3: Write a program to find factorial of given number.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int Factorial(int iNo)
{
    int iCnt = 0;
    int iFactorial = 1;

    //Updater used   
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
       {
            iFactorial = iFactorial * iCnt;                 
       }

    return  iFactorial;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
        
    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is : %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5
// Output : 120   (5*4*3*2*1)  
// Input : -5
// Output : 120   (5*4*3*2*1)
// Input : 4
// Output : 24   (4*3*2*1)
// 
/////////////////////////////////////////////////////////////////////////////////////