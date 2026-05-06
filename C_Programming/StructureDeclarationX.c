#include<stdio.h>

struct Demo   // declaration
{
    int i;  //4
    char ch;  //1 ---- creates padding
    float f;   //4
};   //12

int main()
{
    struct Demo dobj;   ///memory allocation
    printf("%d\n",sizeof(dobj));  //12
    
    return 0;
}