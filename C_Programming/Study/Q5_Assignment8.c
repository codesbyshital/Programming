#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SquareMeter
// Output:          Covert temperature from Fahrenheit into Celcius.
// Description:     Assignment_8: Q.5: Write a program which accept Square feet & convert it into 
//                                     Square meter.(1 Square Feet = 0.0929 Square meter
// Date:            24/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


double SquareMeter(float fFeet)
{
    double dSqMeter = 0.0;

        //Updater used   
    if(fFeet < 0)
    {
        fFeet = -fFeet;
    }
    
    dSqMeter = fFeet * 0.0929;

    return  dSqMeter;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
        
    printf("Enter area in Square Feet: \n");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);

    printf("Correspondance area in Square Meter is : %lf",dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(1)  
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5
// Output : 0.464515    (5 * 0.0929)  
// Input : 7
// Output : 0.650321    (7 * 0.0929)
// 
/////////////////////////////////////////////////////////////////////////////////////