///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description:     Assignment_28: Q.5 :Accept a number of rows & number of columns from user & Display below pattern.                                       
// Input : iRow = 5          iCol = 5
// Output:   1    2    3    4    5     
//           1    2              5
//           1         3         5
//           1              4    5 
//           1    2    3    4    5         
//          
// Date:            15/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
        int i = 0, j = 0; 
                                                    
        for(i = 1; i <= iRow; i++)
        {                 
            for (j = 1; j <= iCol; j++)
            {     
                if(i == 1 || i == iCol || j == 1 || j == iRow)
                {                                          
                    printf("%d\t",j);   
                }
                else if(i == j)
                {
                   printf("%d\t",i); 
                }
                else
                {
                    printf(" \t");
                }
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

