
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayRange
// Output:          Search element in the range.
// Description:     Assignment_15: Q.5  : Accept N Number from user & return product of all Odd elements.
//                                        
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


// time complexity : o(N)
int Product(int Arr[], int iSize)
{
    int iCnt = 0;
    int iProd = 1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {       
           iProd = iProd * Arr[iCnt];
        }                       
    }
    
    return iProd;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0 , iCnt = 0, iRet = 0;
  
    printf("Enter the number of elements \n");
    scanf("%d",&iLength);
    
    Brr = (int *)malloc(iLength * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter %d the Elements \n", iLength);

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        printf("Enter Element: %d", iCnt+1);
        scanf("%d",&Brr[iCnt]);
    }

    
    iRet = Product(Brr, iLength);

    printf("Product of Odd elements is: %d",iRet);
      
    free(Brr);

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Number of elements
/////////////////////////////////////////////////////////////////////////////////////
// Input : N : 6
//        Elements : 15   66   3   10  44  70
//         
// Output : 45
// 
// 
/////////////////////////////////////////////////////////////////////////////////////