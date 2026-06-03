#include<stdio.h>

float AddTwoNumbers(
                        float fNo1,                     //first input
                        float fNo2                      //second Input
                   )
{
    float fAns = 0.0;                                   //Variable to store result
    fAns = fNo1 + fNo2;                                 //Perform Addition
    return fAns;
}

int main()
{
    //Variable creation with Naming Conventions 
    float fValue1 = 0.0f;                               //to store First input
    float fValue2 = 0.0f;                               //to store second input
    float fResult = 0.0f;                               //to store Result

    printf("Enter First Number\n");             
    scanf("%f",&fValue1);                       
    printf("Enter Second Number\n");           
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1,fValue2);           //Call to function

    printf("Addition is : %f\n",fResult);

    return 0;
}