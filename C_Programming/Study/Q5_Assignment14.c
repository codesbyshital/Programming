
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Frequency
// Output:          Frequency of NO.
// Description:     Assignment_14: Q.5  : Accept N Number from user & accept one another number as NO, return
//                                        frequency of that NO
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

// time complexity : o(N)
BOOL Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {       
            iCount++;
            break;
        }
               
    }

    if(iCount == 0)
        return FALSE;
    else 
        return TRUE;
}


int main()
{
    int *Brr = NULL;
    int iLength = 0 , iCnt = 0 , iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number of elements \n");
    scanf("%d",&iLength);
    
    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the Elements \n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Enter the element to search\n");
    scanf("%d",&iValue);

    bRet = Frequency(Brr, iLength, iValue);

    if(bRet == TRUE)
        printf("Element is present.\n");
    else
        printf("Element is not present.\n");

    free(Brr);

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Number of elements
/////////////////////////////////////////////////////////////////////////////////////
// Input : N : 7
//        Elements : 85 11  3  111  93  11  90
// Output : 2
// 
// 
/////////////////////////////////////////////////////////////////////////////////////