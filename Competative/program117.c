#include <stdio.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Array elemnets are: \n ");
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",Arr[iCnt]); 
    }
    
}

int main()
{   int iLength = 4;
    int iCnt = 0;

    int Brr[iLength];

    printf("Enter the Elements \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
        
    Display(Brr,iLength);
    
    return 0;
}

//Input : 10, 20, 30, 40
//output : 10 20 30 40
//Time complexity : O(N))