import java.util.HashMap;

class HashMapDemo
{
    public static void main(String A[])
    {
        HashMap <String, Integer> hobj = new HashMap <String, Integer> ();

        hobj.put("PPA", 27000);
        hobj.put("LB", 28000);
        hobj.put("Python", 29000);
        hobj.put("LB", 28500);

        
        System.out.println(hobj.get("Python"));
        System.out.println(hobj.get("LB"));   // key duplicate, but value gets overided

        System.out.println(hobj);

        

    }
}