
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Count
// Output:          Count frequency of digit less than 6 in that number
// Description:     Assignment_12: Q.5  : Write a program which accept Number from user & Count frequency of such
//                                        a digit which are less than 6 in it.
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>


int Count(int iNo)
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
        
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("Count of digits which are less than 6 is : %d",iRet);
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = length of Number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 2395
// Output : Count of digits which are less than 6 is : 3
// Input : 1018
// Output : Count of digits which are less than 6 is : 3
// Input : 9440
// Output :Count of digits which are less than 6 is : 3
// Input : 96672
// Output :Count of digits which are less than 6 is : 1
// 
/////////////////////////////////////////////////////////////////////////////////////