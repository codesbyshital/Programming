///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  findSmallestDigit
// Description:     Assignment_20: Q.5  : Write a program to find smallest digit in given number.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public int findSmallestDigit(int iNo)
    {
        int iMin = 9, iDigit = 0;
        
        //updater used
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        if(iNo == 0)
        {
            System.out.println("Smallest digit is : 0");
            return 0;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
                 
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
                         
            iNo = iNo / 10;
                        
        }

        return iMin;
                      
    }
}

class Q5_Assignment20
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
                        
        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        int iRet = obj.findSmallestDigit(iValue1);     
        
        System.out.println("Smallest Digit is : "+iRet);        
              
                
        sobj.close();
        System.gc();
          
    }
}

