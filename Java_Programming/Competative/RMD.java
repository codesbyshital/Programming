import java.util.*;

class Base
{
    public int i,j;
    public void fun()
    {        System.out.println("Inside Base fun");    }

    public void gun()
    {        System.out.println("Inside Base gun");    }

    public void sun()
    {        System.out.println("Inside Base sun");    }

}
class Derived extends Base
{
    public int x,y;
    public void gun()
    {        System.out.println("Inside Derived gun");    }

    public void run()
    {        System.out.println("Inside Derived run");    }

    public void sun()
    {        System.out.println("Inside Derived sun");    }

}

class RMD
{
    public static void main(String A[])
    {
        //Base bobj = new Base();     //no casting
        Base bobj = new Derived();      //upcasting        
        //Derived dobj = new Derived();   //no casting
        Derived dobj = new Base();



    }
}