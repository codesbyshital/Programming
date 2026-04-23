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
    //printf("Size of Object : %lu\n",sizeof(hobj));
    hobj.f = 10.0f;
    hobj.Arr[0] = 11;
    hobj.Arr[1] = 21;
    hobj.Arr[2] = 51;
    printf("%f\n",hobj.f);
    printf("%d\t%d\t%d\n", hobj.Arr[0], hobj.Arr[2], hobj.Arr[3]);
    
    
    return 0;
}