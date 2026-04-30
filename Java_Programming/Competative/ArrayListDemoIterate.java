import java.util.ArrayList;
import java.util.Iterator;

class ArrayListDemoIterate
{
   public static void main(String A[]) 
   {
        ArrayList <Float> aobj = new ArrayList <Float> ();

        aobj.add(90.67f);
        aobj.add(76.45f);
        aobj.add(95.99f);
        aobj.add(90.78f);

        

        Iterator iobj = aobj.iterator();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }


        

   }
}
