///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description:     Assignment_22: Q.2 : Accept a number from user & Display below pattern. 
//                                       
// Input : 5
// Output : 5   #   4   #   3   #   2   #   1   #                                 
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
        int iCnt = 0;        
            
        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            printf("%d\t",iCnt);
            printf("#\t");
            
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

