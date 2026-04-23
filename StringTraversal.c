#include <stdio.h>

int main()
{
    char str[] = "Ganesh";
    char *ptr = NULL;

    ptr = str;              //ptr points to 100

    while(*ptr != '\0')
    {
    printf("%c\n",*ptr);    
    ptr++;                  
    }
  
    
    return 0;
}