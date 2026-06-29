///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplaySchedule
// Description:     Assignment_29: Q.5 :Accept Division of student from user & depends on division Display exam timing
//                  There are 4 Divisions in school as A,B,C,D. Exam  of Division A at 7 am, B at 8:30 am, C at 9:20 am
//                  and D at 10:30 am. (Application should be case insensitive)
// Input : C        
// Output: Your Exam at 9:20 AM
// Input:  d 
// Output: Your Exam at 10:30 AM       
//          
// Date:            23/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void DisplaySchedule(char chDiv)
{
    
    if(chDiv == 'a' || chDiv == 'A')
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 'b' || chDiv == 'B')
    {
        printf("Your exam at 8:30 AM");
    }
    else if(chDiv == 'c' || chDiv == 'C')
    {
        printf("Your exam at 9:20 AM");
    }
    else if(chDiv == 'd' || chDiv == 'D')
    {
        printf("Your exam at 10:30 AM");
    }
    else
    {
        printf("Enter valid Division..");
    }
   

}

int main()
{
    char cValue = '\0';
    
    printf("Enter the Division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    
    return 0;
}


