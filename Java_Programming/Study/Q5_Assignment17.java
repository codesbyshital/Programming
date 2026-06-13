///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PrintTable
// Description:     Assignment_17: Q.5  : Write a program to printthe multiplication table of a Numbers.
//                                       
// Date:            10/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public void PrintTable(int iNum)
    {               
        int iCnt = 0, iMult = 1;        
        
        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            iMult = iNum * iCnt;
            System.out.println(iCnt+"*"+iNum+" = "+iMult);
        }
        
    }
}

class Q5_Assignment17
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;

        System.out.println("Enter the Number : ");
        iNo1 = sobj.nextInt();
       
        Logic obj = new Logic();

        System.out.println("Multiplication Table for "+iNo1+" is :");
        obj.PrintTable(iNo1);
          
    }
}

