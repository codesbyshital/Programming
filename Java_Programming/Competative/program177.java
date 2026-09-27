//Input : 9
//Output: 1 * 2 * 3 * 4 *   5

import java.util.Scanner;

class program177
{
    static public void Display(int iNO)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 1, iCount = 1; iCnt <= iNO; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print("*\t");                  
            }
            else
            {
                System.out.print(iCount+"\t"); 
                iCount++;  
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

