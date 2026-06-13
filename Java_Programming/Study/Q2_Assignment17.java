///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CheckPalindrome
// Description:     Assignment_17: Q.2  : Write a program to check whether a number is Palindrome or not.
//                                       
// Date:            10/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class DigitX
{
    public int iNum, iDigit;
    public int iRev, iTemp;

    public DigitX(int A)
    {
        this.iNum = A;
    }

    public void CheckPalindrome()
    {               
        iRev = 0;        
        iTemp = iNum;  
                                     
        while(iNum != 0)     
            {
                iDigit = iNum % 10;
                iRev = (iRev * 10) + iDigit;
                iNum = iNum / 10;        
            }
        
        System.out.println("Reverse number is: "+iRev);

        if(iRev == iTemp) 
            {
                System.out.println("Number is Palindrome"); 
            }                         
        else
        {
            System.out.println("Number is not Palindrome");
        }            
            
    }
}

class Q2_Assignment17
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in); 
            
        System.out.println("Enter the number ");
        int iValue = sobj.nextInt();
          
        DigitX aobj = new DigitX(iValue);

        aobj.CheckPalindrome();

        sobj = null;
        System.gc();
   
    }
}

