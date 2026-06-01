/*
Input : iRow= 4   iCol=4

Output:  
1
1   2
1   2   3
1   2   3   4

TimeComplexity  > n2/2
*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j= 0;   
        
        //filter for diagonal pattern
        if(iRow != iCol)
        {
            System.out.println("Invalid Parameter.");
            System.out.println("Number of rows & columns should be same...");
            return;
        }
        
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= i; j++)
                {      
                    
                    System.out.print(j+"\t");
                    
                }             
            System.out.println();   
        }
        
    }
}

class program224
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

