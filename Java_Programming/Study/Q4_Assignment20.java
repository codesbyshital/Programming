///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  findLargestDigit
// Description:     Assignment_20: Q.4  : Write a program to find largest digit in given number.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public int findLargestDigit(int iNo)
    {
        int iMax = 0, iDigit = 0;
        
        //updater used
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
                 
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
                         
            iNo = iNo / 10;
                        
        }

        return iMax;
                      
    }
}

class Q4_Assignment20
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2= 0;
                
        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        int iRet = obj.findLargestDigit(iValue1);     
        
        System.out.println("Maximum Digit is : "+iRet);
        
              
                
        sobj.close();
        System.gc();
          
    }
}

