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
    dobj.i = 10;
    dobj.ch = 'A';
    dobj.f = 10.0f;

    printf("%d\n", dobj.i);   //10
    printf("%c\n",dobj.ch);   //A
    printf("%f\n",dobj.f);   //10.0

    return 0;
}