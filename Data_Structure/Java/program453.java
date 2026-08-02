/*
    Singly Linked List started...
*/

class node 
{
    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    private node first;                 // private
    private int iCount;

    SinglyLL()              // default constructor
    {
        System.out.println("Inside Constructor of SinglyLL");
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {

    }

    public int Count()
    {
        return iCount;
    }


    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }
        
        else
        {
            newn.next = first;
            first = newn;
        }

        iCount++;                   // node inserted so

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
            newn.next = first;
            first = newn;
        }

        iCount++;                   // node inserted so

    }

    public void InsertAtPos(int iNo, int iPos)
    {

    }

    public void DeleteFirst()
    {
    }

    public void DeleteLast()
    {}
    
    public void DeleteAtPos(int iPos)
    {
    }


}

class program453
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
        
        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

    }
    
}

