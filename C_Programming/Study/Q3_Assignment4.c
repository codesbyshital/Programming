#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  NonFact
// Output:          Factors in descending order(Reverse Order)
// Description:     Assignment_4: Q.3: Write a program which accept one number from user and display its 
//                                     non-factors.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void NonFact(int iNo)
{   
    int iCnt = 0;
    
    //Updator
    if(iNo <= 0)
    {
       iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t",iCnt); 
        }          
    }
    
}


int main()
{
    int iValue = 0;
    
    printf("Enter Number : ");    
    scanf("%d",&iValue);
    
    NonFact(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 12
// Output : 5   7   8   9   10  11 
/////////////////////////////////////////////////////////////////////////////////////