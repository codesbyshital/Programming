/*
  
    Sorting methods started: Bubble sort :

    class sorting extends ArrayX  :

    efficient Bubble sort : inside inner loop

    removed pass


   
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
        int iStart = 0, iEnd = 0, pass = 0;
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

        
        if(CheckSorted() == false)
        {
            return BiDirectionalSearch(iNo);
        }

       

        iStart = 0;
        iEnd = iSize - 1;

         if(iNo < Arr[iStart] || iNo > Arr[iEnd])    // filter to exist if element not there if array is sorted.
         {
            return false;
         }

        
        while(iStart <= iEnd)
        {
            iMid = iStart + ((iEnd - iStart) / 2);    //

            if(Arr[iMid] == iNo || Arr[iStart] == iNo || Arr[iEnd] == iNo)
            {
                bFlag = true;
                break;
            }

            else if(iNo < Arr[iMid] )   // left side 
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

// space compelxity will be zero, it sorted in place

final class Sorting extends ArrayX      // sibling of searching
{

    public Sorting(int iSize)   // parent class constructor calling
    {
        super(iSize);
    }

    public void BubbleSort()    // n2 complexity
    {
        int i = 0, j = 0, temp = 0, pass = 0;


        for(i = 0, pass =1; i < iSize - 1 ; i++, pass++)
        {
            for(j = 0; j < iSize -1-i; j++)
            {
                if(Arr[j]  > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                }
            }

            System.out.println("Data after pass : "+pass);
            Display();
        }
    }

public void BubbleSortEfficient()    // Efficiency : complexity
    {
        int i = 0, j = 0, temp = 0;
        boolean bFlag = false;

        bFlag = true;   // initialize    go if blag is true otherwise donot go inside
        for(i = 0; (i < iSize - 1) && (bFlag == true) ; i++)
        {
            bFlag =  false;   // reset to false

            for(j = 0; j < iSize -1-i; j++)
            {
                if(Arr[j]  > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;

                    bFlag =  true;    // imp  : if swap once , make flag true
                }
            }
            
        }// outer for
    }

}


class program892
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements :");
        int iSize = sobj.nextInt();

        Sorting srobj = new Sorting(iSize);

        srobj.Accept();
        srobj.Display();

        srobj.BubbleSortEfficient();   // 

        System.out.println("Array after Sort :");

        srobj.Display();    // after sorting 
        
        
        srobj = null;

        System.gc();        
       
    }
}