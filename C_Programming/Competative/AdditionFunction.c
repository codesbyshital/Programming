#include<stdio.h>

int Addition(int no1, int no2)
{
    int Ans = 0;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    int ret = 0;
    ret = Addition(11,10);
    printf("Addition is : %d\n", ret);
              
    return 0;
}