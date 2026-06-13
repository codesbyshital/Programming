///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  displayGrade
// Description:     Assignment_19: Q.2  : Write a program to Display grade of student based on Marks.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public void displayGrade(int Marks)
    {
        
        if((Marks < 0) || (Marks > 100))     
        {
            System.out.println(" Invalid Marks");
        }
        else if(Marks >= 75 ) 
        {
            System.out.println("Grade: Distinction.");
        }
        else if(Marks >= 65) 
        {
            System.out.println("Grade: First Class.");
        }
        else if(Marks >= 55) 
        {
            System.out.println("Grade: Second Class.");
        }
        else if(Marks >= 40) 
        {
            System.out.println("Grade: Pass.");
        }
        else 
        {
            System.out.println("Grade: FAIL.");
        }
              
    }
}

class Q2_Assignment19
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        
        System.out.println("Enter the Marks : ");
        iValue = sobj.nextInt();
       
        Logic obj = new Logic();
                
        obj.displayGrade(iValue);
        
        sobj.close();
        System.gc();
          
    }
}

