///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  printDivisibleBy2and3
// Description:     Assignment_21: Q.5 : Write a program to print all numbers from 1 to N that are divisible 
//                                       by both 2 & 3.                                   
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public int printDivisibleBy2and3(int iNo)
    {
        int iCnt = 0, iCount = 0;
        
        //updater used
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iCnt % 2 == 0) && (iCnt % 3 == 0))
            {
                System.out.print(iCnt+"\t");
            }
            
        }

        return iCount;        
                        
    }
}

class Q5_Assignment21
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
                        
        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();
       
        Logic obj = new Logic();              
        
        obj.printDivisibleBy2and3(iValue1);   
        
                                
        sobj.close();
        System.gc();
          
    }
}

