
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountEven
// Output:          Counts Even elements.
// Description:     Assignment_14: Q.2  : Accept N Number from user & return Differrence between frequency.
//                                        of Even number & Odd numbers.
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>


int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0;
    int iCountDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]% 2 == 0)
        {
           iCountEven++;
        }     
        
        if(Arr[iCnt]% 2 != 0)
        {
           iCountOdd++;
        } 
    }
    
    iCountDiff = iCountEven - iCountOdd;

    return iCountDiff;
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
    printf("Differrence in frequency of Even & Odd elemnets is: %d\n",iRet);

    free(p);

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Number of elements
/////////////////////////////////////////////////////////////////////////////////////
// Input : N : 7
//        Elements : 85 66  3  80  93  88  90
// Output : (4-3)
// 
// 
/////////////////////////////////////////////////////////////////////////////////////