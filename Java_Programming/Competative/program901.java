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
    public node first;
    public int iCount;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);   // new node creation


        if(this.first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }

        iCount++;

    }// insertfirst


} // end of SinglyLL



public class program901
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);

        sobj.InsertFirst(11);



    }
    
}
