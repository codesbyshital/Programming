///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description:     Assignment_24: Q.5 : Accept a number of rows & number of columns from user & Display below pattern.                                       
// Input : iRow = 3          iCol = 4
// Output:  1   2   3   4
//          5   6   7   8   
//          9   10  11  12  
//          
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
        int i = 0, j = 0; 
        int count = 1;
                            
        for(i = 1; i <= iRow; i++)
        {                            
            for (j = 1; j <= iCol; j++, count++)
            {                
                printf("%d\t",count);                
                  
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

