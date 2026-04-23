#include<stdio.h>

#pragma pack(1)    //to avoid padding

// declaration of structure
    
struct Demo
{
    int i;  //4
    int *ptr;  //8
};             //12


int main()
{
    struct Demo dobj;
    
    printf("Size of Object is: %lu\n ", sizeof(dobj));                   //either 8 or 16  depends on compiler

    
    
    return 0;
}