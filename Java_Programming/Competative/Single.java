class Single
{
    public static void main(String A[])
    {

        System.out.println("Inside Main............");

        Derived dobj = new Derived();

        System.out.println(dobj.i);
        System.out.println(dobj.j);
        System.out.println(dobj.x);
        
        dobj.fun();
        dobj.gun();

        System.out.println("End of Main...........");

    }
}


class Base
{
    public int i,j;

    public Base()
    {
        this.i = 0;
        this.j = 0;
        System.out.println("INside Base Constructor");
    }

    protected void finalize()
    {
        System.out.println("Inside Finalize method of Base");
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }

}

class Derived extends Base
{
    public int x;

    public Derived()
    {
        System.out.println("Inside Derived constructor");
        this.x = 0;
    }

    protected void finalize()
    {
        System.out.println("Inside Finalize method of Derived");
    }

    public void gun()
    {
        System.out.println("Inside derived gun");
    }

}




