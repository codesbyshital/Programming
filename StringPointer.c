#include <stdio.h>

int main()
{
    char str[] = "Ganesh";
    char *ptr = NULL;

    ptr = str;              //ptr points to 100

    printf("%c\n",*ptr);    //G
    ptr++;                  //101

    printf("%c\n",*ptr);    //a
    ptr++;                  //102

    printf("%c\n",*ptr);    //n
    ptr++;                  //103

    printf("%c\n",*ptr);    //e
    ptr++;                  //104

    

    return 0;
}