


class Base
{
    public int i;

    public Base(int no)
    {
        this.i = no;
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
        super(11);     //Explicitely calling to Base constructor
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



class SuperDemoX
{
    public static void main(String A[])
    {

        
        Derived dobj = new Derived();  

        dobj.gun();

    }
}