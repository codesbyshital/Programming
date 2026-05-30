#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayFactor
// Output:          Factors of that number
// Description:     Assignment_3: Q.2: Write a program which accept one number from user and print factors
//                                     of that number.
// Date:            22/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayFactor(int iNo)
{   
    int i = 0;
    
    //Updator
    if(iNo <= 0)
    {
       iNo = -iNo;
    }

    for(i = 1; i <= (iNo/2); i++)
    {
        if(iNo % i == 0)
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
    
    DisplayFactor(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N/2)
//where N >=0
/////////////////////////////////////////////////////////////////////////////////////
// Input : 24
// Output : 1   2   3   4   6   8   12  
/////////////////////////////////////////////////////////////////////////////////////