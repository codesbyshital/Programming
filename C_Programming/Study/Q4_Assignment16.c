
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Digits
// Output:          return 3 digit Numbers.
// Description:     Assignment_16: Q.4  : Accept N Number from user & Display all such numbers which contains  
//                                        3 digits in it.
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


// time complexity : o(N)
void Digits(int Arr[], int iSize)
{
    int iCnt = 0, iNum = 0, iCount = 0;
                                      
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {     
        iCount = 0;
        iNum = Arr[iCnt];

        //updater used
        if(iNum < 0)
        {
            iNum = -iNum;
        }

        while(iNum != 0)     
        {
            iCount++;
            iNum = iNum / 10;        
        }

        if(iCount == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }        
        
    }
    
}

int main()
{
    int *p = NULL;
    int iLength = 0 , iCnt = 0;
  
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
    
    Digits(p, iLength);
          
    free(p);

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Number of elements
/////////////////////////////////////////////////////////////////////////////////////
// Input : N : 6
//        Elements : 8225   665   3   76  953  858      
// Output : 665     953     858
//
/////////////////////////////////////////////////////////////////////////////////////