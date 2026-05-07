class Marvellous
{}

class Hello
{}

public class GetClassDemo 
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();
        Hello hobj = new Hello();

        System.out.println(mobj.getClass());
        System.out.println(hobj.getClass());

    }
    
}
