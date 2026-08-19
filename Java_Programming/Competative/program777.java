
import java.util.HashMap;

/*
hashmap   == check characters & insert into hashmap
take String as tokens key <String, int>

chech maximum character occurance

*/ 

class program777
{

    public static void main(String A[])
    {
        
        HashMap <String, Integer> hobj = new HashMap<String, Integer>();

        hobj.put("PPA",1);
        hobj.put("LB",1);
        hobj.put("Python",1);
        hobj.put("LSP",1);
        hobj.put("LB",2);


        System.out.println(hobj);


    }
}