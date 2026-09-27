#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
    }

    return iMax;   
    
}


int main()
{
    int *Brr = NULL;
    int iLength = 0 , iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements \n");
    scanf("%d",&iLength);
    
    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the Elements \n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Maximum(Brr, iLength);

    printf("Maximum element is : %d",iRet);

    
    free(Brr);

    return 0;
}