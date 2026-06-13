///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FindMin
// Description:     Assignment_17: Q.4  : Write a program to find Minimum of three Numbers.
//                                       
// Date:            10/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Logic
{  
    
    public void FindMin(int a, int b, int c)
    {               
                                 
        if(a <= b && a <= c) 
        {
            System.out.println(a+" is Minimum."); 
        }                         
        else if(b <= a && b <= c)
        {
            System.out.println(b+" is Minimum.");
        }          
        else
        {
            System.out.println(c+" is Minimum.");
        } 
        
    }
}

class Q4_Assignment17
{
    public static void main(String A[])
    {       

        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0, iNo2 = 0, iNo3 = 0;

        System.out.println("Enter First Number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        iNo2 = sobj.nextInt();

        System.out.println("Enter Third Number : ");
        iNo3 = sobj.nextInt();

        Logic obj = new Logic();
        obj.FindMin(iNo1,iNo2,iNo3);
          
    }
}

