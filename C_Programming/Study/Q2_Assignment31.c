///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountSmall
// Description:     Assignment_31: Q.1 :Write a program which accept string from user and count number of Small 
//                                      Characters.
// Input :Marvellous
// Output: 9
//          
// Date:            23/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(const char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(Arr);

    printf("Frequency is : %d\n",iRet);

       
    return 0;
}