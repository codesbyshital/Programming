/*
    Matrix : accept row & col from user
    OOP : class
    deallocate matrix object, accept-display
    private members for class

    use inheritance : Matrix_LB extends Matrix
    Addition of elements od matrix

*/ 
import java.util.Scanner;

import Marvellous.Matrix;


class MatrixLB extends Matrix
{
    public MatrixLB(int iRow, int iCol)
    {
        super(iRow, iCol);    // super calls base class
    }

}

class program795
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

        MatrixLB mobj = new MatrixLB(iRow,iCol);

        mobj.Accept();
        mobj.Display();


        mobj = null;

        System.gc();

        
    }
}