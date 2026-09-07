/*
    Searching Technique : Binary Search

    must be soreted data
   
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

final class Searching extends ArrayX      //this will not be inherited , no one cna extend it
{
    public Searching(int iSize)
    {
        super(iSize);
    }

    public boolean LinearSearch(int iNo)
    {
        int i = 0;
        
        boolean bFlag = false;

        for(i = 0; i < super.iSize; i++)
        {
            if(Arr[i] == iNo)
            {
                bFlag = true;
                break;
            
            }
        }

        return  bFlag;
    }

    // both directions ---
    public boolean BiDirectionalSearch(int iNo)
    {
        int iStart = 0, iEnd = 0;
        boolean bFlag = false;

        iStart = 0;
        iEnd = super.iSize-1;

        while(iStart <= iEnd)
        {
            if(Arr[iStart] == iNo || Arr[iEnd] == iNo)
            {
                bFlag = true;
                break;
            }

            iStart++;
            iEnd--;

        }

        return bFlag;
    }  // end of BiDirectionalSearch


    public boolean CheckSorted()
    {
        int i = 0;
        boolean bFlag = true;

        for(i = 0; i < iSize - 1; i++)
        {
            if(Arr[i]  > Arr [i+1])
            {
                bFlag = false;
                break;
            }
        }
        return bFlag;
    }

    public boolean BinarySearch(int iNo)
    {
        int iStart = 0, iEnd = 0, iMid = 0;
        boolean bFlag = false;

        iStart = 0;
        iEnd = iSize - 1;

        while(iStart <= iEnd)
        {
            iMid = iStart + ((iEnd - iStart) / 2);    //

            if(Arr[iMid] == iNo)
            {
                bFlag = true;
                break;
            }

            else if(iNo < Arr[iMid])   // left side 
            {
                iEnd = iMid -1;
            }
            else if(iNo > Arr[iMid])   // right side
            {
                iStart =  iMid +1;
            }


        }


        
        return bFlag;
    }



}


class program877
{
    public static void main(String A[]) 
    {
        Searching sobj = new Searching(7);

        sobj.Accept();
        sobj.Display();

        if(sobj.BinarySearch(35))
        {
            System.out.println("Element is present");
        }
        else
        {
            System.out.println("Element is not present");

        }

       
    }
}