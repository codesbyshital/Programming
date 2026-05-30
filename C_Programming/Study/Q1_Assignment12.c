
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayDigit
// Output:          Display Digits from that Number
// Description:     Assignment_12: Q.1  : Write a program which accept Number from user & Display in Reverse Order.  
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigit(int iNo)
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
        printf("%d\n",iDigit);
        iNo = iNo /10;
    }
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
        
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = length of Number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 2395
// Output : 5   9   3   2
// Input : 1018
// Output : 8   1   0   1
// Input : -1018
// Output : 8   1   0   1 
// Input : 9000
// Output :0   0   0   9
// 
/////////////////////////////////////////////////////////////////////////////////////