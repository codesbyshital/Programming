#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FactRev
// Output:          Factors in descending order(Reverse Order)
// Description:     Assignment_4: Q.2: Write a program which accept one number from user and display its 
//                                     factors in descending Order.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void FactRev(int iNo)
{   
    int iCnt = 0;
    
    //Updator
    if(iNo <= 0)
    {
       iNo = -iNo;
    }

    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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
    
    FactRev(iValue);
    
    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N/2)
//where N >=0
////////////////////////////////////////////////////////////////////////////////////
//Input : 10
// Output : 5   2   1
// Input : 12
// Output : 6   4   3   2   1
/////////////////////////////////////////////////////////////////////////////////////