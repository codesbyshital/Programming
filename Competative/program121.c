#include <stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    
    printf("Elements of Array are: \n");

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }

}

int main()
{   
    int *Brr = NULL;    
    int iLength = 0, iCnt = 0;

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
    Display(Brr,iLength);   

    //Step 5: Deallocate the memory
    free(Brr);

    return 0;
}

//Input : from user dynamic memory allocation
//output : Display Array elements
//Time complexity : O(N))  where N = 4