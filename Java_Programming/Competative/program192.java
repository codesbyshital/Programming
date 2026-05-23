//Input : row=3 col=4
//Output: * * * *
//        * * * * 
//        * * * *
// Nested loop 
//

import java.util.Scanner;

class program192
{
    public static void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        
        for(i = 1; i <= iRow; i++ )
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();

        }        
        

    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in); 
            
        System.out.println("Enter the number of Rows");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Column");
        int iValue2 = sobj.nextInt();
          
        Display(iValue1, iValue2);

        sobj = null;
        System.gc();

    }
}

