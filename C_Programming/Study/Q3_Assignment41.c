///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display()
// Description:     Assignment_41: Q.3 :Write a recursive program which accept a string from user & count 
//                                      number of characters.
// Input:  Hello                 
// Output: 5  
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int StrlenX(char *str)
{             
    static int iCount = 0;
    
    if(*str != '\0')
    {
        iCount++;
        str++;
        StrlenX(str);               // recursive call
    }
    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n]s",Arr);

    iRet = StrlenX(Arr);
    printf("Length of String is :%d",iRet);
    
    return 0;
}