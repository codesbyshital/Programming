#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  EvenFactorial
// Output:          Find Even Factorial of number.
// Description:     Assignment_7: Q.3: Write a program to find Even Factorial of given number 
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int EvenFactorial(int iNo)
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
            if(iCnt % 2 == 0)
            {
                iFactorial = iFactorial * iCnt;
            }
                             
       }

    return  iFactorial;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
        
    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of Number is : %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5
// Output : 8   (4*2)  
// Input : -5
// Output : 8   (4*2)
// Input : 10
// Output : 3840   (10*8*6*4*2)
// 
/////////////////////////////////////////////////////////////////////////////////////