
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountTwo
// Output:          Count frequency of 2 in that number
// Description:     Assignment_12: Q.3  : Write a program which accept Number from user & Count frequency of 2
//                                        in it.
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountTwo(int iNo)
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
        
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("Count frequency of 2 is : %d",iRet);
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = length of Number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 2395
// Output : Count Frequncy of 2 is : 1
// Input : 1018
// Output : Count Frequncy of 2 is : 0
// Input : 9000
// Output : Count Frequncy of 2 is : 0
// Input : 9222
// Output :Count Frequncy of 2 is : 3
// 
/////////////////////////////////////////////////////////////////////////////////////