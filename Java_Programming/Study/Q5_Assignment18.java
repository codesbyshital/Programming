///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CheckSign
// Description:     Assignment_18: Q.5  : Write a program to check whether number is positive, negative, or Zero.
//                                       
// Date:            10/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public void CheckSign(int iNo)
    {
        
        if(iNo < 0)     
        {
            System.out.println("Number is Negative");
        }
        else if(iNo > 0)
        {
            System.out.println("Number is positive");
        }
        else
        {
            System.out.println("Number is 0 ");;
        }
       
    }
}

class Q5_Assignment18
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;
        
        System.out.println("Enter the Number : ");
        iNo1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        obj.CheckSign(iNo1);
        
        sobj = null;
        System.gc();
          
    }
}

