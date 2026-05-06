class Marvellous
{
    public Marvellous()
    {
        System.out.println("Inside Marvellous");
    }

    protected void finalize()
    {
        System.out.println("Inside finalize method");
    }
}

public class FinalizeDemoX 
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();
        Marvellous mobj2 = mobj;   // reference count is still active i.e 1, so finalize not called
        
        mobj = null;
        System.gc();

        System.out.println("End of main");

    }
    
}
