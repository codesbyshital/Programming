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
        char Arr[] = {'#', '$'};

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {                
                System.out.print(Arr[i%2]+"\t");    // checks whether Arr[0]  / Arr[1]
            }        
            System.out.println();
        }             
            
        
    }
}

class program202
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

