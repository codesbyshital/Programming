///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkVowel
// Description:     Assignment_31: Q.4 :Write a program which accept string from user and check whether it contains 
//                                      vowels in it or not.
// Input : "MarvellouS"
// Output: True
// Input : "xyz"
// Output: False
//          
// Date:            23/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(const char *str)
{
    BOOL bFlag = FALSE;
    
    while(*str != '\0')
    {
        
        if((*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') || 
           (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u'))
        {
            bFlag = TRUE;             
        }
        else
        {
            bFlag = FALSE;
        }
        
        str++;              
    }
    return bFlag;
    
}

int main()
{
    char Arr[50] = {'\0'};
    BOOL bRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("String contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }
       
    return 0;
}