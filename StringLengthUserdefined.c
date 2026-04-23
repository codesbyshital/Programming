#include <stdio.h>

//Call by address
int strlenX(char *ptr)
{
    int i = 0;

    while(*ptr != '\0')
    {
        i++;
        ptr++;
    }

    return i;
}

int main()
{
    char str[] = "Ganesh";      //100
    
    int ret = 0;

    ret = strlenX(str);         //strlenX(100)

    printf("String length is : %d\n", ret);   //6
    
    return 0;
}