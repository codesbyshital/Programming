///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Reverse
// Description:     Assignment_31: Q.5 :Write a program which accept string from user and display it in a reverse 
//                                      order.
// Input : "MarvellouS"
// Output:  SuollevraM
//          
// Date:            23/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;

    while(*str != '\0')
    {
        str++;
    }
    
    str--;
    end = str;
    
   while(start < end)
   {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
   }
}


int main()
{
    char Arr[50] = {'\0'};
   
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    Reverse(Arr);
    printf("Reverse String is: %s\n",Arr);
        
           
    return 0;
}