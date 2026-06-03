
/*
    START
        Accept number as No
        If No is completelt Divisible by 2 then 
        Print Even
        Otherwise Print Odd
    STOP

    START
        Accept number as No
        Divide No by 2
        If Remainder is 0  
            then Print as Even
        Otherwise
            Print as Odd.
    STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}