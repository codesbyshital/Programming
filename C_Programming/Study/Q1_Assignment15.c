
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Check
// Output:          Search Number.
// Description:     Assignment_15: Q.1  : Accept N Number from user & accept one another number as NO, check whether 
//                                        NO is present or not.
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
BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {       
            bFlag = TRUE;
            break;
        }
               
    }

    return bFlag;
}


int main()
{
    int *Brr = NULL;
    int iLength = 0 , iCnt = 0 , iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number of elements \n");
    scanf("%d",&iLength);
    
    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter the Elements \n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Enter the element to search\n");
    scanf("%d",&iValue);

    bRet = Check(Brr, iLength, iValue);

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
// Input : N : 5
//        Elements : 85 11  3  111  93  
//        NO  : 11
// Output : Element is present
// Input : N : 5
//        Elements : 85 11  3  111  93  
//        NO  : 2
// Output : Element is not present
// 
// 
/////////////////////////////////////////////////////////////////////////////////////