
import java.util.HashMap;
import java.util.Scanner;

/*
hashmap   == check characters & insert into hashmap
take String as tokens key <String, int>

chech maximum character occurance

*/ 

class program778
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

        for(String s: Tokens)
        {
        System.out.println(s);
            
        }




    }
}