///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description:     Assignment_25: Q.3 :Accept a number of rows & number of columns from user & Display below pattern.                                       
// Input : iRow = 5          iCol = 5
// Output:  a   b   c   d   e
//          1   2   3   4   5
//          a   b   c   d   e  
//          1   2   3   4   5 
//          a   b   c   d   e      
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
        char ch = '\0';
                            
        for(i = 1; i <= iRow; i++)
        {     
            if(i % 2 != 0)
                {              
                    for (j = 1, ch = 'a'; j <= iCol; j++, ch++)
                    {                                
                        printf("%c\t",ch);
                    }                       
                              
                }                    
            else
                {
                    for (j = 1, count = 1; j <= iCol; j++, count++)
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

