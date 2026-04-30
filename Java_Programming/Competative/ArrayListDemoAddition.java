import java.util.ArrayList;
import java.util.Iterator;

class ArrayListDemoIAddition
{
   public static void main(String A[]) 
   {
        ArrayList <Integer> aobj = new ArrayList <Integer> ();

        aobj.add(10);
        aobj.add(20);
        aobj.add(30);
        aobj.add(40);
        

        Iterator iobj = aobj.iterator();

        int iSum = 0;

        while(iobj.hasNext())
        {
            iSum = iSum + (int)iobj.next();
        }
        
        System.out.println("Addition is : "+iSum);

   }
}
