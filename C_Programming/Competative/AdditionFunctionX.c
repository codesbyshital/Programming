#include<stdio.h>

int Addition(int no1, int no2)
{
    int Ans = 0;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    int ret = 0, a = 11, b = 10;
    ret = Addition(a,b);
    printf("Addition is : %d\n", ret);
              
    return 0;
}