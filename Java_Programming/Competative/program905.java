/*
    Singly LL in java   :
    want to find mid of list
*/

import java.util.*;

class node
{
    public int data;
    public node next;

    public node(int no)    // constructor
        {
            this.data = no;
            this.next = null;
        }

}  // end of node

class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);   // new node creation

        newn.next = first;
        first = newn;
    

        iCount++;

    }// insertfirst

    public int Count(int iNo)
    {
       
        return iCount;

    }// count

    public void display()
    {
        node temp = null;

        temp = first;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" | ->");
            temp = temp.next;
        }
            System.out.print("null");

    }

    public void InsertLast(int iNo)
    {

        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }
        else
            {
                node temp = first;

                while(temp.next != null)
                {
                    temp =temp.next;
                }
                temp=temp.next;

            }
            icount++;
    }

    // Time = N + N/2    : n number & middle

    public int MiddleElement()
    {
        int iCount = Count();

        int Middle = iCount/2;

        int i=0;
        node temp = first;

        for(i = 1; i <= Middle ; i++)
        {
            temp = temp.next;
        }
        return temp.data;

    }


} // end of SinglyLL



public class program905
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);

        sobj.InsertFirst(11);       

        sobj.InsertLast(101);
        sobj.InsertLast(111);

        sobj.Display();

        iRet = sobj.MiddleElement();

        System.out.println("Middle Element is :"+iRet);
        

    }
    
}
