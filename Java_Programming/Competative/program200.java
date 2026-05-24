/*
Input : iRow= 4   iCol=4

Output:     $   $   $   $
            #   #   #   #
            $   $   $   $
            #   #   #   #          

*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j= 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if((i % 2) == 0)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("$\t");
                }

                
            }
            System.out.println();
        }
    }
}

class program200
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Rows");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Column");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);

        sobj.close();
        System.gc();

    }

}

