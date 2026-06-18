///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description:     Assignment_24: Q.3 : Accept a number of rows & number of columns from user & Display below pattern.                                       
// Input : iRow = 3          iCol = 5
// Output : A   A   A   A   A
//          B   B   B   B   B
//          C   C   C   C   C
//          

// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
        int i = 0, j = 0; 
        char ch = '\0';
                    
        for(i = 1,ch = 'A'; i <= iRow; i++, ch++)
        {                            
            for (j = 1; j <= iCol; j++)
            {
                if(i % 2 != 0)
                {
                    printf("%c\t",ch);  
                }
                else
                {
                    printf("%c\t",ch);                   
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

