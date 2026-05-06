class Demo
{
    public final int i;
    public int j;

    public Demo(int a, int b)
    {
        this.i = a;
        this.j = b;
    }
}

class Final_DataX
{
    public static void main(String A[])
    {
        Demo dobj = new Demo(10,20);
        
        dobj.j = 21;
        
        dobj.j++;           //Allowed

    }
}