#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  OddFactorial
// Output:          Find Odd Factorial of number.
// Description:     Assignment_7: Q.4: Write a program to find Odd Factorial of given number 
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int OddFactorial(int iNo)
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
            if(iCnt % 2 != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of Number is : %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5
// Output : 15   (5*3*1)  
// Input : -5
// Output : 15   (5*3*1) 
// Input : 10
// Output : 945   (9*7*5*3*1)
// 
/////////////////////////////////////////////////////////////////////////////////////