///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  printDigit
// Description:     Assignment_19: Q.4  : Write a program to print each digit of number sepeartely.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public void printDigit(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo /10;
        }
                      
    }
}

class Q4_Assignment19
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;
        
        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();
       
        Logic obj = new Logic();
                
        obj.printDigit(iValue);

                
        sobj.close();
        System.gc();
          
    }
}

