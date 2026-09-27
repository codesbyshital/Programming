/*
Input : row=4 col=4

Output:   
          # & # &
          # & # &
          # & # &
          # & # &  
          

*/

import java.util.Scanner;

class program196
{
    public static void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        
        for(i = 1; i <= iRow; i++ )
        {
            for(j = 1; j <= iCol; j++)
            {
                if(j % 2 == 0)
                System.out.print("&\t");
                else
                System.out.print("#\t");
                
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

