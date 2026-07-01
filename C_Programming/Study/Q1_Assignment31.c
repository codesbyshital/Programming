///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountCapital
// Description:     Assignment_31: Q.1 :Write a program which accept string from user and count number of Capital letters.
//                  
// Input :Marvellous Multi OS
// Output: 4
//          
// Date:            23/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(const char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;             
        }
        str++;        
    }

    return iCnt;

}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Frequency is : %d\n",iRet);

       
    return 0;
}