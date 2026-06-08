
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Maximum
// Output:          retrun Maximum element.
// Description:     Assignment_16: Q.1  : Accept N Number from user & return largest Number. 
//                                        
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


// time complexity : o(N)
int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;
   
    iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {       
           iMax = Arr[iCnt];
        }                       
    }
    
    return iMax;
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

    
    iRet = Maximum(p, iLength);

    printf("Largest element is: %d\n",iRet);
      
    free(p);

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Number of elements
/////////////////////////////////////////////////////////////////////////////////////
// Input : N : 6
//        Elements : 15   66   3   10  44  70      
// Output : 70
// Input : N : 5
//        Elements : -3   -6   -4   -2  -9      
// Output : -2
/////////////////////////////////////////////////////////////////////////////////////