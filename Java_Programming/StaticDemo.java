class Demo
{
    public int i;
    public int j;
    public static int k;

    static
    {
        System.out.println("Inside Static block");
        k = 10;
    }
    public Demo()
    {
        this.i = 11;
        this.j = 21;
        System.out.println("Inside Constructor");

    }

    public void fun()
    {
        System.out.println("Inside fun method...");
        System.out.println(this.i);
        System.out.println(this.j);
        System.out.println(Demo.k);
    }

    public static void gun()
    {
        System.out.println("Inside gun method...");
        System.out.println(Demo.k);
    }

}

class StaticDemo
{
    public static void main(String A[])
    {
        System.out.println("Inside Main");
        System.out.println("Value of K :"+Demo.k);
        Demo.gun();

        Demo dobj1 = new Demo();        //
        Demo dobj2 = new Demo();        //

        dobj1.fun();
        dobj2.fun();

        
    }
}