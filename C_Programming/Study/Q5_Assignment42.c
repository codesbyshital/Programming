///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Reverse()
// Description:     Assignment_42: Q.4 :Write a recursive program which accept number from user & return  
//                                      its reverse number.
// Input:  87984               
// Output: 9
//          
// Date:            27/07/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Reverse(int iNo)
{
    int iDigit = 0;         // static not required as we not required it to preserve.
    
    if(iNo > 0)
    {
        iDigit = iNo % 10;        
        iNo = iNo / 10;
        printf("%d",iDigit);              // it gives o/p in reverse order
        Reverse(iNo);
        
        
    }

}

int main()
{
    int iValue = 0;
   
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Reverse(iValue);
    
    return 0;
}