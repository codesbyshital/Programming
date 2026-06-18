///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Pattern
// Description:     Assignment_22: Q.1 : Accept a number from user & Display below pattern. 
//                                       
// Input : 5
// Output : A   B   C   D   E                                  
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
        int iCnt = 0;
        char ch = '\0';
            
        for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
        {
            printf("%c\t",ch);
            
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

