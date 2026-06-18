///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description:     Assignment_24: Q.4 : Accept a number of rows & number of columns from user & Display below pattern.                                       
// Input : iRow = 4          iCol = 5
// Output:  4   4   4   4   4
//          3   3   3   3   3
//          2   2   2   2   2
//          1   1   1   1   1

// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
        int i = 0, j = 0; 
                            
        for(i = iRow; i >= 1; i--)
        {                            
            for (j = 1; j <= iCol; j++)
            {                
                printf("%d\t",i);                  
                  
            }                

            printf("\n");   
                     
        }                         
    
}

int main()
{       
    int iValue1 = 0, iValue2;

    printf("Enter Number of Rows \n");
    scanf("%d",&iValue1);
               
    printf("Enter Number of Column \n");
    scanf("%d",&iValue2);
        
    Pattern(iValue1, iValue2);   
        
    return 0;                           
        
}

