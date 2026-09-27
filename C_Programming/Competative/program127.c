#include<stdio.h>
#include<stdlib.h>

int CountFrequeny(int Arr[], int iSize)
{
    int iCount = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
        
    }

    return iCount;
}


int main()
{
    int *Brr = NULL;
    int iLength = 0 , iCnt = 0, iRet = 0;

    printf("Enter the number of elements \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the Elements \n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = CountFrequeny(Brr, iLength);

    printf("Count of 11 in the elements is : %d",iRet);

    free(Brr);

    return 0;
}