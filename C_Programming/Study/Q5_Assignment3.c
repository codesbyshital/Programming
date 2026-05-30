#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkVowel
// Output:          Check whtether character is Vowel or not.
// Description:     Assignment_3: Q.3: Accept one character from user and check whether that character is Vowel 
//                                    (a,e,i,o,u) -or not.
// Date:            22/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL ChkVowel(char CValue)
{

   if((CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U') || (CValue == 'a' ||CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u'))
    {
        return TRUE;
    }
   else 
   {
        return FALSE;
   }

}


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
   
    printf("Enter Character \n");
    
    scanf("%c",&cValue);
    
    bRet = ChkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : NA
/////////////////////////////////////////////////////////////////////////////////////
// Input : a    Output : It is Vowel
// Input : D    Output : It is not Vowel
/////////////////////////////////////////////////////////////////////////////////////