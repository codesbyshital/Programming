#include<stdio.h>
int main()
{
    char ch='A';
    int i = 11;
    float f = 90.99f;
    double d = 78.67890;

    char *cptr = &ch;
    int *iptr = &i;
    float *fptr = &f;
    double *dptr = &d;

    printf("%c\n", *cptr);
    printf("%d\n", *iptr);   //11
    printf("%f\n", *fptr);
    printf("%lf\n", *dptr);



    
    return 0;
}