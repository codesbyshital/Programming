#include <stdio.h>


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayEvenFactor
// Output:          Even Factors of that number
// Description:     Assignment_3: Q.3: Write a program which accept one number from user and print Even Factors
//                                     of that number.
// Date:            22/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayEvenFactor(int iNo)
{
   
    int i = 0;
    
    if(iNo <= 0)
    {
       iNo = -iNo;
    }

    for(i = 1; i <= (iNo/2); i++)        
    {

        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t",i); 
        }
          
    }
    
}


int main()
{
    int iValue = 0;
   
    printf("Enter Number : ");    
    scanf("%d",&iValue);
    
    DisplayEvenFactor(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N/2)
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 36
// Output : 2   4   6  12  18
/////////////////////////////////////////////////////////////////////////////////////