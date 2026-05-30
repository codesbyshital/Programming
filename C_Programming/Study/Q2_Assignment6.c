#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Output:          Print Number into word.
// Description:     Assignment_6: Q.2: Accept single digit number from user and print it into word.
// Date:            23/05/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{

    //Updater used
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
        printf("Zero");

    else if(iNo == 1)
        printf("One");

    else if(iNo == 2)
        printf("Two");

    else if(iNo == 3)
        printf("Three");

    else if(iNo == 4)
        printf("Four");

    else if(iNo == 5)
        printf("Five");

    else if(iNo == 6)
        printf("Six");

    else if(iNo == 7)
        printf("Seven");

    else if(iNo == 8)
        printf("Eight");

    else if(iNo == 9)
        printf("Nine");

    else
        printf("Invalid digit");
    
}

int main()
{
    int iValue = 0;
        
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//Time Complexity : O(N)  where N <= 9
/////////////////////////////////////////////////////////////////////////////////////
// Input : 9
// Output : Nine  
// Input : -3
// Output : Three
// Input : 12
// Output : Invalid digit    
// 
/////////////////////////////////////////////////////////////////////////////////////