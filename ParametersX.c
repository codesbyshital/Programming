#include<stdio.h>

void Display(int no1, int no2)
{
    printf("%d %d\n",no1,no2);

}

int main()
{
    int a = 11 , b = 21;
    
    Display(a,b);   // Call by value
    
    return 0;
}