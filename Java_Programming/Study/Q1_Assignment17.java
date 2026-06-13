///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SumOfDigit
// Description:     Assignment_17: Q.1  : Write a program to find sum of digits of a number.
//                                       
// Date:            10/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class DigitX
{
    public int iNum, iDigit;
    public int iSum;

    public DigitX(int A)
    {
        this.iNum = A;
    }

    public void SumOfDigit()
    {                                               
        while(iNum != 0)     
            {
                iDigit = iNum % 10;
                iSum = iSum + iDigit;
                iNum = iNum / 10;        
            }

            System.out.println("Sum of digits is: "+iSum);           
            
    }
}

class Q1_Assignment17
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in); 
            
        System.out.println("Enter the number ");
        int iValue = sobj.nextInt();
          
        DigitX aobj = new DigitX(iValue);

        aobj.SumOfDigit();

        sobj = null;
        System.gc();
   
    }
}

