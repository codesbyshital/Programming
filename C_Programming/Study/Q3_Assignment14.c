
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Check
// Output:          Check 11 is present or not.
// Description:     Assignment_14: Q.3  : Accept N Number from user & check whether that number contains
//                                        11 in it or not.
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
           bFlag = TRUE;
            break;
        }     
                
    }        

    return bFlag;
}

int main()
{
    int *p = NULL;
    int iSize = 0 , iCnt = 0;
    BOOL bRet = FALSE;
   

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

    
    bRet = Check(p, iSize);
    if(bRet == TRUE)
    {
        printf("11 is present.\n");
    }
    else
    {
        printf("11 is not present.\n");
    }


    free(p);

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Number of elements
/////////////////////////////////////////////////////////////////////////////////////
// Input : N : 7
//        Elements : 85  66  11  80  93  88  90
// Output : 11 is present.
// Input : N : 5
//        Elements : 12  1  0  80  93  
// Output : 11 is not present.
// 
/////////////////////////////////////////////////////////////////////////////////////