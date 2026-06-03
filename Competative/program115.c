#include <stdio.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",Arr[iCnt]); 
    }
    
}

int main()
{   int iLength = 4; 
    int Brr[iLength] = {10,20,30,40};    // Error, could not be Initialised 
    
    Display(Brr,iLength);
    
    return 0;
}

//Segmentation Fault (Array index out of bound).
//Input :
//output : 
//Time complexity : O(1))