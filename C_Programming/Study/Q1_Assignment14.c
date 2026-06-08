
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountEven
// Output:          Counts Even elements.
// Description:     Assignment_14: Q.1  : Accept N Number from user & return frequency of Even numbers.
//                                       
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>


int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]% 2 == 0)
        {
           iCount++;
        }                       
    }
    
    return iCount;
}

int main()
{
    int *p = NULL;
    int iSize = 0 , iCnt = 0, iRet = 0;
   

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
        printf("Enter Element: %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    
    iRet = CountEven(p, iSize);
    printf("Number of Even elements are: %d\n",iRet);

    free(p);

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Number of elements
/////////////////////////////////////////////////////////////////////////////////////
// Input : N : 6
//        Elements : 85 66  3  80  93  88
// Output : 3
// 
// 
/////////////////////////////////////////////////////////////////////////////////////