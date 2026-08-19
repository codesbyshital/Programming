
import java.util.Scanner;

/*
    Matrix : accept row & col from user

*/ 

class program788
{
    public static void main(String A[])
    {
        int iRow = 0, iCol = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number of Rows");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns");
        iCol = sobj.nextInt();

        int Arr[][] = new int[iRow][iCol];

        System.out.println(Arr.length);
        System.out.println(Arr[0].length);

    }
}