#include <stdio.h>

int main()
{
    int Arr[5] = {0};
    int iCnt = 0;

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    printf("Entered Elements are: \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

            
    return 0;
}



//Input
//output : 
//Time complexity : o