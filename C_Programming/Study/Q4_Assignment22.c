///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description:     Assignment_22: Q.4 : Accept a number from user & Display below pattern. 
//                                       
// Input : 4
// Output : #   1   *   #   2   *   #   3   *   #   4   *                                  
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
        int iCnt = 0;        
            
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("#\t");
            printf("%d\t",iCnt);
            printf("*\t");
            
        }                         
    
}

int main()
{       
    int iValue = 0;

    printf("Enter Number of elements \n");
    scanf("%d",&iValue);
                
        
    Pattern(iValue);   
        
    return 0;                           
        
}

