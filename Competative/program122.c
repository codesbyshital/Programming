#include <stdio.h>
#include<stdlib.h>

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
{   
    int *Brr = NULL;    
    int iLength = 0, iCnt = 0, iRet = 0;

    //Step 1: Accept the number of elements...
    printf("Enter the number of Elements \n");
    scanf("%d", &iLength);

    //Step 2: Allocate the memory...
    Brr = (int *)malloc(iLength * sizeof(int));

    //Step 3: Accept the values from user..
    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
     
    //Step 4: Use the memory  (logic)
    iRet = Summation(Brr,iLength);   
    printf("Summation of Array elements: %d\n",iRet);

    //Step 5: Deallocate the memory
    free(Brr);

    return 0;
}

//Input : 1,2,3,4,5
//output : Summation of Array elements is : 16
//Time complexity : O(2N))  where N = iLength