///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description:     Assignment_24: Q.2 : Accept a number of rows & number of columns from user & Display below pattern.                                       
// Input : iRow = 4          iCol = 4
// Output : A   B   C   D
//          a   b   c   d
//          A   B   C   D
//          a   b   c   d

// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
        int i = 0, j = 0; 
        char ch = '\0';
        char ch1 = '\0';
            
        for(i = 1; i <= iRow; i++)
        {    
            if(i % 2 == 0) 
            {                 
                for (j = 1, ch1 = 'a'; j <= iCol; j++, ch1++)
                {
                    printf("%c\t",ch1);    
                }   
            } 
            else
            {
                for (j = 1, ch = 'A'; j <= iCol; j++, ch++)
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

