///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayASCII
// Description:     Assignment_30: Q.1 :Write a program whih displays ASCII table. Table contains symbol, Decimal,
//                  Hexadecimal and Octal representation of every member from 0 to 255.
//          
// Date:            23/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    printf("-------------------------------------------------\n");
    printf("| Decimal  | Hexadecimal  | Octal  | Symbol  |\n");
    printf("-------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("|  %7d  | %10X  |  %4o  |  %7c   |\n",iCnt,iCnt,iCnt,iCnt);
    }

    printf("-------------------------------------------------\n");
    
}

int main()
{

    DisplayASCII();
    
    return 0;
}


