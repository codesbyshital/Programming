///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description:     Assignment_22: Q.5 : Accept a number from user & Display below pattern. 
//                                       
// Input : 8
// Output : 2   4   6   8   10  12  14  16                                  
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
        int iCnt = 0;
        int iCount = 0;        
            
        for(iCnt = 1, iCount = 2; iCnt <= iNo; iCnt++, iCount = iCount + 2)
        {            
            printf("%d\t",iCount);            
                        
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

