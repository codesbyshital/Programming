
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountFour
// Output:          Count frequency of 4 in that number
// Description:     Assignment_12: Q.4  : Write a program which accept Number from user & Count frequency of 4
//                                        in it.
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>


int CountFour(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    //Updator used
    if(iNo < 0)
    {
        iNo = -iNo;
    }
               
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 4)
        {
            iCnt++;
        }
            
        iNo = iNo /10;
                
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
        
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("Count frequency of 4 is : %d",iRet);
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = length of Number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 2395
// Output : Count Frequncy of 4 is : 0
// Input : 1018
// Output : Count Frequncy of 4 is : 0
// Input : 9440
// Output : Count Frequncy of 4 is : 2
// Input : 922432
// Output :Count Frequncy of 4 is : 1
// 
/////////////////////////////////////////////////////////////////////////////////////