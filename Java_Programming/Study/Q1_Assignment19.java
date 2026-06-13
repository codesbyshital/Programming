///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CheckLeapYear
// Description:     Assignment_19: Q.1  : Write a program to check whether given year is leap year or not.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public void CheckLeapYear(int iYear)
    {
        
        if((iYear %  400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))     
        {
            System.out.println(iYear+" is Leap year.");
        }
        else 
        {
            System.out.println(iYear+" is not Leap year.");
        }
              
    }
}

class Q1_Assignment19
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iYear = 0;
        
        System.out.println("Enter the Year : ");
        iYear = sobj.nextInt();
       
        Logic obj = new Logic();
                
        obj.CheckLeapYear(iYear);
        
        sobj.close();
        System.gc();
          
    }
}

