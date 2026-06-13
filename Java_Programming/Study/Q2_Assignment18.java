///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PrintEvenNumbers
// Description:     Assignment_18: Q.2  : Write a program to print all Even numbers up to N.
//                                       
// Date:            10/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public void PrintEvenNumbers(int iNo)
    {
        int iCnt = 0 ;

        //updater used.
        if(iNo < 0)
        {
            iNo = -iNo;
        }
                        
        for(iCnt = 1; iCnt <= iNo ; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                System.out.println(iCnt);
            }                                              
        }              
       
    }
}

class Q2_Assignment18
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;

        System.out.println("Enter the Number : ");
        iNo1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        obj.PrintEvenNumbers(iNo1);
        
          
    }
}

