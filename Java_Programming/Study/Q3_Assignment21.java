///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  displayFactors
// Description:     Assignment_21: Q.3 : Write a program to Display all factors of given number.
//                                       
// Date:            12/06/2026
// Author:          Shital Ajit Nikam   
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Logic
{      
    public void displayFactors(int iNo)
    {
        int iCnt = 0;
        
        //updater used
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt < (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.print(iCnt+"\t");
            }
            
        }
        
                        
    }
}

class Q3_Assignment21
{
    public static void main(String A[])
    {       
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
                        
        System.out.println("Enter the Number : ");
        iValue1 = sobj.nextInt();
       
        Logic obj = new Logic();
                
        System.out.println("Factors of Number are: ");
        obj.displayFactors(iValue1);     
        
                        
        sobj.close();
        System.gc();
          
    }
}

