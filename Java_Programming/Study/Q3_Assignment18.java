///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PrintOddNumbers
// Description:     Assignment_18: Q.3  : Write a program to print all Odd numbers up to N.
//                                       
// Date:            10/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public void PrintOddNumbers(int iNo)
    {
        int iCnt = 0;

        //updater used.
        if(iNo < 0)
        {
            iNo = -iNo;
        }
                        
        for(iCnt = 1; iCnt <= iNo ; iCnt++)
        {
            if((iCnt % 2) != 0)
            {
                System.out.println(iCnt);
            }                                              
        }              
       
    }
}

class Q3_Assignment18
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;

        System.out.println("Enter the Number : ");
        iNo1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        obj.PrintOddNumbers(iNo1);
        
          
    }
}

