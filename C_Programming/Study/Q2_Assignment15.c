
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FirstOcc
// Output:          return index of first occurance of that NO.
// Description:     Assignment_15: Q.2  : Accept N Number from user & accept one another number as NO, return 
//                                        index of first occurance of that NO.
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


// time complexity : o(N)
int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    int iTemp = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {       
            iTemp = iCnt;
            break;
        }
                       
    }

    return iTemp;
}


int main()
{
    int *Brr = NULL;
    int iLength = 0 , iCnt = 0 , iValue = 0;
    int iRet = 0;

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

    iRet = FirstOcc(Brr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no such element...\n");
    }
    else
    {
        printf("First occurance of element is at Index : %d",iRet);
    }
    
    
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