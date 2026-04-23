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
    printf("%d\n",sizeof(dobj));  //9
    
    return 0;
}