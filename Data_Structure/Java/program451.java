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
    public node first;
    public int iCount;

    SinglyLL()              // default constructor
    {
        System.out.println("Inside Constructor of SinglyLL");
        this.first = null;
        this.iCount = 0;
    }

}

class program451
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();        

    }
    
}

