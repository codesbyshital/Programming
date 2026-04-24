#include<stdio.h>

int no=11;   //global variable  : allocated in Data section

void fun()
{
    int i=51;   //local variable : allocated in stack section
    printf("Inside fun : %d\n",i);
    printf("Inside fun : %d\n",no);
}

int main()
{
    int i = 21;   //local variable : allocated in stack
    printf("Inside main : %d\n",i);
    printf("Inside main : %d\n",no);

    fun();
    
    return 0;

}