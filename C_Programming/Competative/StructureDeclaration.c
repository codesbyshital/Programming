#include<stdio.h>

struct Demo   // declaration
{
    int i;  //4
    float f;   //4
};   //8

int main()
{
    struct Demo dobj;   ///memory allocation
    printf("%d\n",sizeof(dobj));  //8

    return 0;
}