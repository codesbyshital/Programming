///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Description:     Assignment_30: Q.2 :Accept charater from user. If character is small display its corresponding 
//                  capital charatcer, and if it is capital, dipslay its corresponding small character. In other cases  
//                  dispaly as it is.
// Input :Q
// Output:q
// Input :m
// Output:M
// Input :4
// Output:4
// Input :%
// Output:%
// Date:            23/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
        
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("Corresponding Capital letter is :%c",ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("Corresponding Small letter is :%c",ch);
    }
    else
    {
        printf("Entered character is :%c",ch);
    }


}

int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
}


