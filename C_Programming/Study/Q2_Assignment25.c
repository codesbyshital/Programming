///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description:     Assignment_25: Q.2 :Accept a number of rows & number of columns from user & Display below pattern.                                       
// Input : iRow = 4          iCol = 5
// Output:  2   4   6   8   10
//          1   3   5   7   9
//          2   4   6   8   10  
//          1   3   5   7   9       
//          
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
        int i = 0, j = 0; 
        int count = 0;
                            
        for(i = 1; i <= iRow; i++)
        {     
            if(i % 2 != 0)
                {              
                    for (j = 1, count = 2; j <= iCol; j++, count = count + 2)
                    {                                
                        printf("%d\t",count);
                    }                       
                              
                }                    
            else
                {
                    for (j = 1, count = 1; j <= iCol; j++, count = count + 2)
                    {                                
                        printf("%d\t",count);
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

