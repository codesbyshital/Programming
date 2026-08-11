///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  WhiteSpace()
// Description:     Assignment_42: Q.1 :Write a recursive program which accept string from user & count 
//                                      white spaces.
// Input:  HE llo Wo rld                
// Output: 3
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int WhiteSpace(char *str)
{             
    static int iCount = 0;
    
    if(*str != '\0')
    {
        if(*str == ' ')        
        {
            iCount++;            
        }
        str++;
        WhiteSpace(str);               // tail recursive call
    }
    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n]s",Arr);

    iRet = WhiteSpace(Arr);
    printf("Number of white spaces in the String are :%d",iRet);
    
    return 0;
}