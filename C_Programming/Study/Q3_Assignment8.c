#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  KMtoMeter
// Output:          Convert Kilometer to meter.
// Description:     Assignment_8: Q.3: Write a program which accept disatance in kilometer & convert it into meter.
//                                     (1 Km = 1000 meter) 
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


int KMtoMeter(int iDis)
{
    int iMeter = 0;

    //Updater used   
    if(iDis < 0 )
    {
        iDis = - iDis;
      
    }

    iMeter = iDis * 1000;

    return  iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
        
    printf("Enter Distance in KM: \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Correspondance distance in Meter is : %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(1)  
/////////////////////////////////////////////////////////////////////////////////////
// Input : 5
// Output : 5000
// Input : 12
// Output : 12000
// 
/////////////////////////////////////////////////////////////////////////////////////