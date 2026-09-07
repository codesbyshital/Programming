/*
    Searching Technique : Linear Search
*/

import java.util.Scanner;

interface GetterSetter
{
    void Accept();          // abstract methods
    void Display();
}

class ArrayX implements GetterSetter
{
    protected int Arr[];                // protected for child
    protected int iSize;


    public ArrayX(int iSize)
    {
        this.iSize = iSize;
        Arr = new int[iSize];
    }


    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements of Array :");

        for(int i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

    }

    public void Display()
    {

        System.out.println("Elements of the Array are :");

        for(int i = 0; i < iSize; i++)
        {
            System.out.print(Arr[i] + "\t");
        }

        System.out.println();
        
    }
}

class Searching extends ArrayX
{
    public Searching(int iSize)
    {
        super(iSize);
    }
}

class program872
{
    public static void main(String A[]) 
    {
        Searching sobj = new Searching(5);

        sobj.Accept();
        sobj.Display();
       
    }
}