/*
    Step 2: Algorithm
    START
        Accespt First number as No1
        Accept Second Number as No2
        Perform Addition for No1 & No2
        Display the Result
    STOP
*/

#include<stdio.h>

int main()
{
    float i,j,k;

    printf("Enter First Number\n");
    scanf("%f",&i);
    printf("Enter Second Number\n");
    scanf("%f",&j);

    k = i+j;

    printf("Addition is : %f\n",k);

    return 0;
}