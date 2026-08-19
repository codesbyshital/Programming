
import java.util.Scanner;

/*
    Matrix : accept row & col from user

*/ 

class program789
{
    public static void main(String A[])
    {
        int iRow = 0, iCol = 0;
        int i = 0, j = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number of Rows");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns");
        iCol = sobj.nextInt();

        int Arr[][] = new int[iRow][iCol];   // dynamic mempory allocation

        System.out.println("Enter the elements of Matrix : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Elements of Matrix are : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
        

    }
}