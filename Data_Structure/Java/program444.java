class node 
{
    public int data;
    public node next;
}

class program444 
{
    public static void main(String A[])
    {
        node newn = null;           // refrence 

        newn = new node();          // memory allocation done.
        newn.data = 11;
        newn.next = null;

        System.out.println(newn.data);
        System.out.println(newn.next);

    }
    
}

