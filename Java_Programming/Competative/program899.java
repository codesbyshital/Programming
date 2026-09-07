/*
  Complete Sorting methods : 
    Sorting methods started: Bubble sort :
class sorting extends ArrayX  :
    

    Insertion sort : 

   
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

 // sorting :

final class Sorting extends ArrayX      // sibling of searching
{
    public boolean IsSorted;


    public Sorting(int iSize)   // parent class constructor calling
    {
        super(iSize);
        IsSorted = false;    // assuming initially data not sorted then make it sorted after sorting method
    }

    public void BubbleSort()    // n2 complexity
    {
        int i = 0, j = 0, temp = 0, pass = 0;

        if(IsSorted == true)
        {
            return;
        }

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
            } // inner for

            System.out.println("Data after pass : "+pass);
            Display();

        }  // outer for

        IsSorted = true;
    }

public void BubbleSortEfficient()    // Efficiency : complexity
    {
        int i = 0, j = 0, temp = 0;
        boolean bFlag = false;
        

        bFlag = true;   // initialize    go if blag is true otherwise donot go inside


        // already sorted
        if(IsSorted == true)
        {
            return;
        } 

        for(i = 0; i < iSize - 1 ; i++)
        {
            if(bFlag == false)
                break;

            
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
            }  // end of inner for
            
        }// outer for
        
        IsSorted = true;    // make it true after soring
    
    } // end of fun

public void SelectionSort()
{
    int i = 0, j = 0, temp = 0, pass = 0;
    int min_index = 0;     // this is for minimum index

    if(IsSorted == true)
        return;

    for(i = 0, pass = 1 ; i < iSize -1 ; i++, pass++)
    {
        min_index = i;

        for(j = i+1; j < iSize; j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }  // end of inner for

        // swap with mean_index  :
        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;

        System.out.println(" Data After pass :"+pass);
        Display();


    }  // outer for

    IsSorted  = true;

} // end of SelctionSort fun

public void InsertionSort()
{
    int i = 0, j = 0;
    int selected  = 0;

    if(IsSorted == true)
        return;

    for(i = 1; i < iSize; i++)
    {
        for(j = i-1, selected  = Arr[i]; (j >= 0) && (Arr[j] > selected) ; j--)    // first elemnt is > second
        {
            Arr[j+1] = Arr[j];    // swap 1st & second
        }  // innetr

        Arr[j+1] = selected;  

    }  // outer

    IsSorted = true;


}// end of insertion


} // end of sorting class

// main class
class program899
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements :");
        int iSize = sobj.nextInt();

        Sorting srobj = new Sorting(iSize);

        srobj.Accept();
        srobj.Display();

        srobj.InsertionSort();   // 

        System.out.println("Final Data after Sort :");

        srobj.Display();    // after sorting 
        
        
        srobj = null;

        System.gc();        
       
    }
}