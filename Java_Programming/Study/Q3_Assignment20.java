///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  checkPerfect
// Description:     Assignment_20: Q.3  : Write a program to check whether a number is a perfect numver or not.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public boolean checkPerfect(int iNo)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2) ; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
            
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        } 
                      
    }
}

class Q3_Assignment20
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2= 0;
                
        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        boolean bRet = obj.checkPerfect(iValue1);

        if(bRet == true)
        {
            System.out.println("Number is perfect");
        }
        else
        {
            System.out.println("Number is not a perfect");
        }
              
                
        sobj.close();
        System.gc();
          
    }
}

