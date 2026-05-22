//Input : 7
//Output: 1 *  3    *   5   *   7

import java.util.Scanner;

class program176
{
    static public void Display(int iNO)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNO; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.print(iCnt+"\t");   
            }
            else
            {
                System.out.print("*\t");   
            }
            
        }

        System.out.println();
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in); 
            
        System.out.println("Enter the number of elements");
        int iValue = sobj.nextInt();
          
        Display(iValue);

    }
}

