///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  productOfDigits
// Description:     Assignment_21: Q.1  : Write a program to calculate the product of digits of number.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public int productOfDigits(int iNo)
    {
        int iMult = 1, iDigit = 0;
        
        //updater used
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        if(iNo == 0)
        {
            return 0;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
                 
            iMult = iMult * iDigit;
                         
            iNo = iNo / 10;
                        
        }

        return iMult;
                      
    }
}

class Q1_Assignment21
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
                        
        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        int iRet = obj.productOfDigits(iValue1);     
        
        System.out.println("Product of Digits is : "+iRet);        
              
                
        sobj.close();
        System.gc();
          
    }
}

