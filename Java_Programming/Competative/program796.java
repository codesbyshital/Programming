/*
    Matrix : accept row & col from user

    OOP : class
    deallocate matrix object, accept-display
    private members for class

    use inheritance : Matrix_LB extends Matrix
    Addition of elements od matrix

*/ 

import java.util.Scanner;

class Matrix
{
    protected int Arr[][];    // private
    protected int iRow;
    protected int iCol;

    public Matrix(int iRow, int iCol)
    {
        System.out.println("Inside constructor ");

        this.iRow = iRow;
        this.iCol = iCol;

        Arr = new int[iRow][iCol];

    }

    
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the elements of Matrix : ");

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

    } // end of accept


    public void Display()
    {
        System.out.println("Elements of Matrix are : ");

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
        
    }// end of Dispaly

} // end pof Matrix


class MatrixLB extends Matrix
{
    public MatrixLB(int iRow, int iCol)
    {
        super(iRow, iCol);    // super calls base class
    }

}

class program796
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