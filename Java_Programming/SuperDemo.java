class SuperDemo
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
    public int i;

    public Base()
    {
        this.i = 11;
        System.out.println("Inside Base Constructor");
    }
    
    public void fun()
    {
        System.out.println("Inside Base fun");
    }

}

class Derived extends Base
{
    public int i;

    public Derived()
    {
        System.out.println("Inside Derived constructor");
        this.i = 21;
    }
   
    public void gun()
    {
        System.out.println("Inside derived gun");
        System.out.println("Value of i : "+i);
        System.out.println("Value of i from Base class: "+super.i);

        
    }

}




