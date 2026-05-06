class Demo
{
    public int i;
    private int j;
    protected int k;

    public Demo()
    {
        i =0;
        j=0;
        k=0;
    }

    public void Display()
    {
        System.out.println("Value of i="+i);   //allowed
        System.out.println("Value of i="+j);  //allowed
        System.out.println("Value of i="+k);  //allowed

    }
}

class Access
{
    public static void main(String A[])
    {
        Demo dobj = new Demo();

        dobj.Display();

        System.out.println("Value of i="+dobj.i);  // allowed
        System.out.println("Value of i="+dobj.j);   //not allowed
        System.out.println("Value of i="+dobj.k);   // ???????

    }
}