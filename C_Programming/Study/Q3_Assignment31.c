///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Differrence
// Description:     Assignment_31: Q.3 :Write a program which accept string from user and return difference between 
//                                      frequency of small charatcers & frequency of capital charatcers.
// Input :MarvellouS
// Output: 6   (8-2)
//          
// Date:            23/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Differrence(const char *str)
{
    int iCntCapital = 0, iCntSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCntCapital++;             
        }

        if(*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;             
        }
        str++;              
    }

    return iCntSmall - iCntCapital;

}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Differrence(Arr);

    printf("Differrence between Frequency is : %d\n",iRet);

       
    return 0;
}