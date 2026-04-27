#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("Maximum Number is = %d",a);
    }
    else
    {
        printf("Maximum number is =%d",b);
    }
    return 0;
}