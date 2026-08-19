// hashmap   == string 

import java.util.HashMap;
import java.util.Scanner;

class program765
{

    public static void main(String A[])
    {
        //int i = 0;

        Scanner sobj = new Scanner(System.in);

        HashMap  <Character, Integer>hobj = new HashMap<Character, Integer>();

        hobj.put('a',1);
        hobj.put('b',1);
        hobj.put('a',1);
        hobj.put('b',1);

        System.out.println(hobj);
        
        
    }
}