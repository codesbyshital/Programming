import java.util.TreeMap;

class program862
{
   public static void main(String A[])
   {
      TreeMap <Integer, String> hobj = new TreeMap<Integer, String>();   //sorting

      hobj.put(20,"C programming");
      hobj.put(10,"Java programming");
      hobj.put(30,"C programming");
      hobj.put(10,"Java programming");
      hobj.put(30,"C programming");


      System.out.println(hobj);
      System.out.println(hobj.firstKey());
      System.out.println(hobj.lastKey());

      System.out.println(hobj.firstEntry());
      System.out.println(hobj.lastEntry());



      
   }
}