
import java.util.HashMap;
import java.util.Scanner;

/*
hashmap   == check characters & insert into hashmap
take String as tokens key <String, int>

chech maximum word occurance

*/ 

class program780
{

    public static void main(String A[])
    {
        
        HashMap <String, Integer> hobj = new HashMap<String,Integer>();

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        str = str.trim();               // remove extra spaces
        str = str.replaceAll("\\s+"," ");
        
        String Tokens[] = str.split(" ");

        int iCount = 0;
        int iMax = 0;
        String temp;

        for(String s: Tokens)
        {
            
            if (hobj.containsKey(s))   // if contains character the check key
                {
                    //iCount = hobj.get(s);
                    hobj.put(s,hobj.get(s)+1);              // increment value by 1 if already available
                    
                }
            else
                {
                    hobj.put(s,1);
                }          
            
        }
         System.out.println("All unique word are : ");

        
        for(String sValue: hobj.keySet())
        {

         System.out.println(sValue);
            
        } 



    }
}