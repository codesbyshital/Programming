abstract class Demo
{
    public int i,j;

    public int Add(int a, int b)   // Concrete Method
    {
        return a+b;
    }

    public abstract int sub(int a, int b);   // Abstract method (pure virtual)

}

class Hello extends Demo     
{
    public int sub(int a, int b)
    {
        return a-b;
    }
}

class Abstract_Demo_Complete
{
    public static void main(String A[])
    {
        Hello hobj = new Hello();
        
        System.out.println(hobj.Add(20,10));
        System.out.println(hobj.sub(20,10));

    }
}