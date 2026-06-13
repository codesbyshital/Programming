///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  checkDivisible
// Description:     Assignment_19: Q.3  : Write a program to check whether number is divisible by 5 & 11 or not.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public boolean checkDivisible(int iNo)
    {
        
        if((iNo % 5 == 0) && (iNo % 11 == 0)) 
        {
            return true;
        }
        else 
        {
            return false;
        }
              
    }
}

class Q3_Assignment19
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;
        
        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();
       
        Logic obj = new Logic();
                
        bRet = obj.checkDivisible(iValue);

        if(bRet == true) 
        {
            System.out.println("Number is divisible by 5 & 11");
        }
        else 
        {
            System.out.println("Number is not divisible by 5 & 11");
        }
        
        sobj.close();
        System.gc();
          
    }
}

