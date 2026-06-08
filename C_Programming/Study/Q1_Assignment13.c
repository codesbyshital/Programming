
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Differrence
// Output:          Differrence between summation of Even elemens & Summation of Odd elements.
// Description:     Assignment_13: Q.1  : Accept N Number from user & return difference between summation of even
//                                        elements & summation of Odd elements.
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>


int Differrence(int Arr[], int iLength)
{
    int iCnt = 0 , iSumEven = 0, iSumOdd = 0, iSumDiff = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]% 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
               
    }

    iSumDiff = iSumEven - iSumOdd;

    return iSumDiff;

}

int main()
{
    int *p = NULL;
    int iSize = 0 , iCnt = 0 , iRet = 0;
   

    printf("Enter the number of elements \n");
    scanf("%d",&iSize);
    
    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter %d Elements... \n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

   
    iRet = Differrence(p, iSize);

    printf("Result is : %d", iRet);

    free(p);

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Number of elements
/////////////////////////////////////////////////////////////////////////////////////
// Input : N : 6
//        Elements : 85 66  3   80  93  88
// Output : 53  (234 - 181)
// 
// 
/////////////////////////////////////////////////////////////////////////////////////