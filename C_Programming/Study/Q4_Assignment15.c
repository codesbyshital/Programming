
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayRange
// Output:          Search element in the range.
// Description:     Assignment_15: Q.4  : Accept N Number from user & accept range, Display all elements  
//                                        from that range.
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


// time complexity : o(N)
void DisplayRange(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;
    int iTemp = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
        {       
            printf("%d\t", Arr[iCnt]);
        }
                       
    }

    
}


int main()
{
    int *Brr = NULL;
    int iLength = 0 , iCnt = 0 , iValue1 = 0, iValue2 = 0;
  
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

    printf("Enter the Start of the range\n");
    scanf("%d",&iValue1);
    printf("Enter the End of the range\n");
    scanf("%d",&iValue2);
    

    DisplayRange(Brr, iLength, iValue1, iValue2);
  
    
    free(Brr);

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Number of elements
/////////////////////////////////////////////////////////////////////////////////////
// Input : N : 7
//        Elements : 1  2   3   4   5   6   7   8
//         Start : 5   End : 10
// Output : 6   7   8
// 
// 
/////////////////////////////////////////////////////////////////////////////////////