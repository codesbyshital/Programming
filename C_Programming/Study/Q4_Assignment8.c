#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FhtoCs
// Output:          Covert temperature from Fahrenheit into Celcius.
// Description:     Assignment_8: Q.4: Write a program which accept temperature in Fahrenheit & convert it into 
//                                     celcius.(1 Celcius = (Fahrenheit -32 ) * (5/9)) 
// Date:            24/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


double FhtoCs(float fTemp)
{
    double dCelcius = 0.0;

    dCelcius = ((fTemp-32) * 5 ) / 9;

    return  dCelcius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
        
    printf("Enter temperature in Fahreinheit: \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Correspondance temperature in Celcius is : %lf",dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(1)  
/////////////////////////////////////////////////////////////////////////////////////
// Input : 10
// Output : -12.2222    (10-31)*5/9  
// Input : 34
// Output : 1.1111      (34-31)*5/9
// Input : 34
// Output : 36.9999      (98.6 - 32) * 5 / 9
// 
/////////////////////////////////////////////////////////////////////////////////////