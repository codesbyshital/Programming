#include<stdio.h>
#pragma pack(1)    //to avoid padding

// declaration of structure
struct Hello   
{
    float f;      //4
    int Arr[3];   //12
}hobj;            //16


int main()
{
    printf("Size of Object : %lu\n",sizeof(hobj));


    return 0;
}