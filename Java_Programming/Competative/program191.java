//Input : 4
//Output: * * * *
//        * * * * 
//        * * * *
// Nested loop 
//

import java.util.Scanner;

class program191
{
    public static void Display()
    {
        int i = 0, j = 0;
        
        for(i = 1;i <= 3; i++ )
        {
            for(j = 1; j <= 4; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();

        }        
        

    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in); 
            
        //System.out.println("Enter the number of elements");
        //int iValue = sobj.nextInt();
          
        Display();

    }
}

