///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SumEvenOddDigits
// Description:     Assignment_18: Q.4  : Write a program to find sum of even & Odd digits seperately in number.
//                                       
// Date:            10/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public void SumEvenOddDigits(int iNo)
    {
        int iCnt = 0, iDigit = 0, iSum = 0, iSumEven = 0, iSumOdd = 0;

        //updater used.
        if(iNo < 0)
        {
            iNo = -iNo;
        }
                        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
                        
            if(iDigit % 2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            } 
            else
            {
                iSumOdd = iSumOdd + iDigit;
            } 

            iNo = iNo / 10;                                         
        }        
        
        System.out.println("Sum of Even Digits: "+iSumEven);
        System.out.println("Sum of Odd Digits: "+iSumOdd);        
       
    }
}

class Q4_Assignment18
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;
        
        System.out.println("Enter the Number : ");
        iNo1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        obj.SumEvenOddDigits(iNo1);
        
        sobj = null;
        System.gc();
          
    }
}

