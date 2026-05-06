class ThisSuper
{
    public static void main(String A[])
    {

        System.out.println("Inside Main............");
        Derived dobj = new Derived();

        dobj.gun();

    }
}


class Base
{
    public int i,j;

    public Base()
    {
        this.i = 11;
        this.j = 21;
        System.out.println("Inside Base Constructor");
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
        this.x = 51;
    }
   
    public void gun()
    {
        System.out.println("Inside derived gun");
        System.out.println("Value of i : "+super.i);
        System.out.println("Value of j : "+super.j);
        System.out.println("Value of x : "+this.x);


    }

}




