#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayConvert
// Output:          COnvert the case of character (lowercase to uppercase & viceversa)
// Description:     Assignment_3: Q.3: Accept one character from user and convert case of that character
// Date:            22/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayConvert(char CValue)
{
   if(CValue >= 'A' && CValue <= 'Z')
    {
        CValue = CValue + 32;
        printf("Converted character is : %c",CValue);
    }
   else if(CValue >= 'a' && CValue <= 'z')
   {
        CValue = CValue - 32;
        printf("Converted character is : %c",CValue);
   }

   else
   {
        printf("Invalid Character..");
   }
}


int main()
{
    char cValue = '\0';
   
    printf("Enter Character \n");
    
    scanf("%c",&cValue);
    
    DisplayConvert(cValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : NA
/////////////////////////////////////////////////////////////////////////////////////
// Input : a    Output : A
// Input : D    Output : d
// Input : 5    Output : Invalid Character..
/////////////////////////////////////////////////////////////////////////////////////