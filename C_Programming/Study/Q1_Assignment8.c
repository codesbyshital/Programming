#include <stdio.h>
#define PI 3.14

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CircleArea
// Output:          fine Area of circle.
// Description:     Assignment_8: Q.1: Write a program which accept radius of circle from user and calculate
//                                     its area. Consider value of PI as 3.14 (Area = PT*Radius*Radius) 
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


double CircleArea(float fRadius)
{
    double dArea = 0.0;

    //Updater used   
    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    dArea = PI * fRadius * fRadius;

      return  dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
        
    printf("Enter Radius: \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf",dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(1)  
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5.3
// Output : 88.2026
// Input : 10.4
// Output : 339.6224
// 
/////////////////////////////////////////////////////////////////////////////////////