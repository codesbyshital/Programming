///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FindMax
// Description:     Assignment_17: Q.3  : Write a program to find Maximum of two Numbers.
//                                       
// Date:            10/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Logic
{  
    
    public void FindMax(int a, int b)
    {               
                                 
        if(a > b) 
            {
                System.out.println(a+" is Maximum."); 
            }                         
        else
        {
            System.out.println(b+" is Maximum.");
        }            
            
    }
}

class Q3_Assignment17
{
    public static void main(String A[])
    {       

        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0, iNo2 = 0;

        System.out.println("Enter First Number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        iNo2 = sobj.nextInt();

        Logic obj = new Logic();
        obj.FindMax(iNo1,iNo2);
          
    }
}

