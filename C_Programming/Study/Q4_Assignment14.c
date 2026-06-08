
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Frequency
// Output:          Frequency of 11.
// Description:     Assignment_14: Q.4  : Accept N Number from user & return frequency of 11 from it.
//                                        
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    
    iRet = Frequency(p, iSize);
    printf("Frequency of element is: %d\n",iRet);

    free(p);

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