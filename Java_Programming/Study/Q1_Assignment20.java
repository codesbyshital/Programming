///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  sumEvenNumbers
// Description:     Assignment_20: Q.1  : Write a program to find sum of all Even numbers up to N.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public int sumEvenNumbers(int iNo)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt < iNo ; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
                        
        }
        return iSum;
                      
    }
}

class Q1_Assignment20
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2= 0;
                
        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        int iRet = obj.sumEvenNumbers(iValue1);

        System.out.print("Sum of Even Number is: "+iRet);
        
                
        sobj.close();
        System.gc();
          
    }
}

