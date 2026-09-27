/*
Input : iRow= 4   iCol=4

Output:  
a
b   b
c   c   c
d   d   d  d

TimeComplexity  > n2/2
*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0; 
        char ch= '\0'  ;
        
        //filter for diagonal pattern
        if(iRow != iCol)
        {
            System.out.println("Invalid Parameter.");
            System.out.println("Number of rows & columns should be same...");
            return;
        }
        
        for(i = 1, ch = 'a'; i <= iRow; i++, ch++)
        {
            for(j = 1; j <= i; j++)
                {                          
                    System.out.print(ch+"\t");                    
                }             
            System.out.println();   
        }
        
    }
}

class program226
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

