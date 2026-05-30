
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CheckZero
// Output:          Checks Zero in that number
// Description:     Assignment_12: Q.2  : Write a program which accept Number from user & Check whether it contains 
//                                        0 in it or not.  
// Date:            30/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    
    //Updator used

    if(iNo < 0)
    {
        iNo = -iNo;
    }
               
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            return TRUE;
        }
            
        iNo = iNo /10;
                
    }
    
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
        
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero \n");
    }
    else
    {
        printf("There is no Zero \n");
    }
    
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = length of Number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 2395
// Output : There is no Zero
// Input : 1018
// Output : It contains Zero
// Input : -1018
// Output : It contains Zero
// Input : 9000
// Output :0   0   0   9
// 
/////////////////////////////////////////////////////////////////////////////////////