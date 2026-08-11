///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountSmall()
// Description:     Assignment_42: Q.3 :Write a recursive program which accept string from user & count 
//                                      number of small characters.
// Input:  Hello World         
// Output: 8
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountSmall(char *str)
{             
    static int iCount = 0;
    
    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')        
        {
            iCount++;            
        }
        str++;
        CountSmall(str);               // tail recursive call
    }
    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n]s",Arr);

    iRet = CountSmall(Arr);
    printf("Number of white spaces in the String are :%d",iRet);
    
    return 0;
}