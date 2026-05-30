#include <stdio.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;    
    
}

int main()
{   int iLength = 4;
    int iCnt = 0;
    int iRet = 0;

    int Brr[iLength];

    printf("Enter the Elements \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
        
    iRet = Summation(Brr,iLength);

    printf("\n Addition of Array elements is: %d", iRet);
    
    return 0;
}

//Input : 10, 20, 30, 40
//output : 100
//Time complexity : O(N))  where N = 4