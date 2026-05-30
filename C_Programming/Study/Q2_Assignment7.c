#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Output:          Display pattern.
// Description:     Assignment_7: Q.2: Accept amount in US Dollar and return its corresponding value in Indian 
//                                     currency, consider 1$ as 70 Rupees.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iRes = 0;

    //Updater used
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   iRes = iNo * 70;

   return iRes;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
        
    printf("Enter number of USD: \n");
    scanf("%d",&iValue);

    iRet= DollarToINR(iValue);

    printf("Value in INR is: %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 10
// Output : 700
// Input : 3
// Output : 210
// 
/////////////////////////////////////////////////////////////////////////////////////