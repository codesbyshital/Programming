#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  RectArea
// Output:          Find Area of Rectangle.
// Description:     Assignment_8: Q.2: Write a program which accept width & Height of Rectangle from user and calculate
//                                     its area. (Area = Width * Height) 
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


double RectArea(float fWidth, float fHeight)
{
    double dArea = 0;

    //Updater used   
    if(fWidth < 0 || fHeight < 0 )
    {
        fHeight = - fHeight;
        fWidth = - fWidth;
    }

    dArea = fWidth * fHeight;

    return  dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;
        
    printf("Enter Width of Rectangle: \n");
    scanf("%f",&fValue1);

    printf("Enter Height of Rectangle: \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is : %lf",dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(1)  
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5.3 9.78
// Output : 51.834
// 
/////////////////////////////////////////////////////////////////////////////////////