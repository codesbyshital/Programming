///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Description:     Assignment_30: Q.3 :Accept charater from user. If it is capital then display all the characters  
//                  from the input characters till Z. If input is small then print all the characters in reverse order   
//                  till a. In other cases return directly.
// Input :Q
// Output:Q   R   S   T   U   V   W   X   Y   Z
// Input :m
// Output:m   l   k   j    i    h    g    f    e    d    c    b    a
// Input :4
// Output:
//
// Date:            23/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCnt = ch ; iCnt <= 'Z'; iCnt++, ch++)
        {
            printf("%c\t",ch);
        }
    }
    
    else if(ch >= 'a' && ch <= 'z')
    {
        for(iCnt = ch ; iCnt >= 'a'; iCnt--,ch--)
        {
            printf("%c\t",ch);
        }
        
    }
    else
    {
        return;
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


