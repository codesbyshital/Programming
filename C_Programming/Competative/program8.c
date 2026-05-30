#include<stdio.h>

float AddTwoNumbers(float fNo1, float fNo2)
{
    float fAns = 0.0;
    fAns = fNo1 + fNo2;
    return fAns;
}

int main()
{
    //Variable creation with Naming Conventions 
    float fValue1 = 0.0f;                   
    float fValue2 = 0.0f;                   
    float fResult = 0.0f;                   

    printf("Enter First Number\n");             
    scanf("%f",&fValue1);                       
    printf("Enter Second Number\n");           
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1,fValue2);           //Call to function

    printf("Addition is : %f\n",fResult);

    return 0;
}