#include<stdio.h>

int Addition(int no1, int no2)
{
    int ans=0;
    ans = no1 + no2;
    return ans;

}

int Substraction(int no1, int no2)
{
    int ans=0;
    ans = no1 - no2;
    return ans;

}

int main()
{
    int A = 11, B = 10;
    int Result =0;

    Result = Addition(A,B);
    printf("Addition is = %d\n", Result);

    Result = Substraction(A,B);
    printf("Substraction = %d\n", Result);

    return 0;
}
