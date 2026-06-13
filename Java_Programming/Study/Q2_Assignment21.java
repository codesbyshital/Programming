///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  countEvenOddRange
// Description:     Assignment_21: Q.2 : Write a program to count how many Even & Odd numbers present between 1 to N.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public void countEvenOddRange(int iNo)
    {
        int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;
        
        //updater used
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEvenCnt++;
            }

            if(iCnt % 2 != 0)
            {
                iOddCnt++;
            }

        }
        
        System.out.println("Count of Even numbers : "+iEvenCnt);
        System.out.println("Count of Odd numbers : "+iOddCnt);
                              
    }
}

class Q2_Assignment21
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
                        
        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        obj.countEvenOddRange(iValue1);     
        
                        
        sobj.close();
        System.gc();
          
    }
}

