#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PrintEven
// Output:          first 7(Number accepted from user) Even numbers
// Description:     Assignment_3: Q.1: Write a program which accept one number from user and print that
//                                     number of times even numbers on screen.
// Date:            22/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void PrintEven(int iNo)
{   
    int iCnt = 0;
    
    if(iNo<= 0)
    {
       return;
    }

    for(iCnt=1; iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt * 2);   
    }
    
}


int main()
{
    int iValue = 0;
   
    printf("Enter Number : ");    
    scanf("%d",&iValue);
    
    PrintEven(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 7
// Output : 2   4   6   8   10  12  14
// 
/////////////////////////////////////////////////////////////////////////////////////