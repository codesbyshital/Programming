
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Output:          Display elements divisible by 5.
// Description:     Assignment_13: Q.2  : Accept N Number from user & Display all such elements which are 
//                                        divisible by 5.
// Date:            05/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>


void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]% 5 == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
                       
    }

    
}

int main()
{
    int *p = NULL;
    int iSize = 0 , iCnt = 0;
   

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

    printf("Elements Divisible by 5 are: \n");
    Display(p, iSize);

    
    free(p);

    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N = Number of elements
/////////////////////////////////////////////////////////////////////////////////////
// Input : N : 6
//        Elements : 85 66  3   80  93  88
// Output : 85   80
// 
// 
/////////////////////////////////////////////////////////////////////////////////////