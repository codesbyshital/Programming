///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  calculatePower
// Description:     Assignment_19: Q.5  : Write a program to calculate power of number using loops.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public int calculatePower(int iBase, int iExp)
    {
        int iCnt = 0, iPower = 1;

        for(iCnt = 1; iCnt <=iExp ; iCnt++)
        {
            iPower = iPower * iBase;
            
        }
        return iPower;
                      
    }
}

class Q5_Assignment19
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2= 0;
                
        System.out.println("Enter the Base Number : ");
        iValue1 = sobj.nextInt();
       
        System.out.println("Enter the exponent of Number : ");
        iValue2 = sobj.nextInt();

        Logic obj = new Logic();
                
        int iRet = obj.calculatePower(iValue1, iValue2);

        System.out.print("Power of Number is: "+iRet);
        
                
        sobj.close();
        System.gc();
          
    }
}

