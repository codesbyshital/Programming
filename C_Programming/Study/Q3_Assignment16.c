
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Difference
// Output:          return Difference between Max & Min element.
// Description:     Assignment_16: Q.3  : Accept N Number from user & return differrence between largest &  
//                                        Smallest Number.
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


// time complexity : o(N)
int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0, iMin = 0, iDiff = 0;
   
    iMax = Arr[0];                                  //find Max
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {       
           iMax = Arr[iCnt];
        }                       
    }

    iMin = Arr[0];                                  //find Min
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {       
           iMin = Arr[iCnt];
        }                       
    }
    
    iDiff = iMax - iMin;

    return iDiff;
}

int main()
{
    int *p = NULL;
    int iLength = 0 , iCnt = 0, iRet = 0;
  
    printf("Enter the number of elements \n");
    scanf("%d",&iLength);
    
    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate Memory\n");
        return -1;
    }

    printf("Enter %d the Elements \n", iLength);

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = Difference(p, iLength);

    printf("Difference between largest & Smallest element is: %d\n",iRet);
      
    free(p);

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Number of elements
/////////////////////////////////////////////////////////////////////////////////////
// Input : N : 6
//        Elements : 85   66   3   66  93  88      
// Output : 90  (93-3)
//
/////////////////////////////////////////////////////////////////////////////////////