#include<stdio.h>
#pragma pack(1)    //to avoid padding

struct Demo   // declaration
{
    int i;  //4
    char ch;  //1 ---- creates padding
    float f;   //4
};   //9

int main()
{
    struct Demo dobj;   ///memory allocation

    struct Demo *ptr = NULL;
    ptr = &dobj;

    ptr -> i = 11;
    ptr -> ch = 'A';
    ptr -> f = 10.0f;

    printf("%d\n",ptr->i);
    printf("%c\n",ptr->ch);
    printf("%f\n",ptr->f);

    return 0;
}