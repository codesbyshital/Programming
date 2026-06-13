///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CheckPrime
// Description:     Assignment_18: Q.1  : Write a program to check whether number is prime or not.
//                                       
// Date:            10/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0 ;
        boolean bFlag = true;
                
        for(iCnt = 2; iCnt <= (iNo / 2) ; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                bFlag = false;
                break;
            }                                              
        }

        return bFlag;        
       
    }
}

class Q1_Assignment18
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;

        System.out.println("Enter the Number : ");
        iNo1 = sobj.nextInt();
       
        Logic obj = new Logic();
        boolean bRet = false;
        
        bRet = obj.CheckPrime(iNo1);

        if(bRet == true)
        {
            System.out.println("It is Prime");
        }
        else
        {
            System.out.println("It is not Prime");
        }
          
    }
}

