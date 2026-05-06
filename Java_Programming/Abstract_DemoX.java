abstract class Demo
{
    public int i,j;

    public int Add(int a, int b)   // Concrete Method
    {
        return a+b;
    }

    public abstract int sub(int a, int b);   // Abstract method (pure virtual)

}

class Hello extends Demo     //Hello is not abstract and does not override abstract method sub(int,int) in Demo
{

}

class Abstract_DemoX
{
    public static void main(String A[])
    {
        Hello hobj = new Hello();
    }
}