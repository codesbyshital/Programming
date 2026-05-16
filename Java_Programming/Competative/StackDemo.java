import java.util.Iterator;
import java.util.Stack;

class StackDemo
{
    public static void main(String A[])
    {
        Stack <String> sobj = new Stack <String> ();

        sobj.push("Pune");
        sobj.push("Mumbai");
        sobj.push("Kolhapur");

        System.out.println(sobj.size());
        System.out.println(sobj);

        System.out.println(sobj.pop());
        System.out.println(sobj);

        System.out.println(sobj.peek());
        System.out.println(sobj);

        sobj.push("Nashik");
        sobj.push("Satara");

        Iterator iobj = sobj.iterator();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        if(sobj.search("Mumbai") != -1)
        {
            System.out.println("Mumbai is there");
        }
        else
        {
            System.out.println("Mumbai is not there");
        }

    }
}

