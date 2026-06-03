
#include<stdio.h>

int main()
{
    //Variable creation with Naming OCnventions 
    float fValue1 = 0.0f;                   //to store First input
    float fValue2 = 0.0f;                   //to store second input
    float fResult = 0.0f;                   //to store Result

    printf("Enter First Number\n");             
    scanf("%f",&fValue1);                       
    printf("Enter Second Number\n");           
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;            //Perform the Addition

    printf("Addition is : %f\n",fResult);

    return 0;
}