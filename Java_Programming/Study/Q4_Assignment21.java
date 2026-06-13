///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  displayFactors
// Description:     Assignment_21: Q.4 : Write a program to count Total number of factors of given number.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public int countFactors(int iNo)
    {
        int iCnt = 0, iCount = 0;
        
        //updater used
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt < (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
            
        }

        return iCount;        
                        
    }
}

class Q4_Assignment21
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
                        
        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();
       
        Logic obj = new Logic();              
        
        int iRet = obj.countFactors(iValue1);   
        
        System.out.println("Count of Factors is: "+iRet);
        
                        
        sobj.close();
        System.gc();
          
    }
}

