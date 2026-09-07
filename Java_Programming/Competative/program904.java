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


} // end of SinglyLL



public class program904
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);

        sobj.InsertFirst(11);

        sobj.Display();

        iRet = sobj.Count();

        System.out.println("Number of elemnets are :"+iRet);



    }
    
}
