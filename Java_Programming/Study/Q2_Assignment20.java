///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  printReverse
// Description:     Assignment_20: Q.2  : Write a program to print numbers from N down to 1 in reverse order.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public void printReverse(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo; iCnt >= 1 ; iCnt--)
        {
            System.out.print(iCnt+"\t");
                        
        }        
                      
    }
}

class Q2_Assignment20
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2= 0;
                
        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        obj.printReverse(iValue1);

              
                
        sobj.close();
        System.gc();
          
    }
}

