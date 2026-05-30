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
    
    char *Arr[] =
    {
        "Zero","One","Two","Three","Four",
        "Five","Six","Seven","Eight","Nine"
    };

    if(iNo >= 0 && iNo <= 9)
    {
        printf("%s",Arr[iNo]);
    }
    else
    {
        printf("Invalid digit");
    }
    
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
//Time Complexity : O(1)  because Array indexing is direct access for that number
/////////////////////////////////////////////////////////////////////////////////////
// Input : 9
// Output : Nine  
// Input : -3
// Output : Three
// Input : 12
// Output : Invalid digit    
// 
/////////////////////////////////////////////////////////////////////////////////////