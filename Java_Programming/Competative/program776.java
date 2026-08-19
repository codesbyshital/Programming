/*
hashmap   == check characters & insert into hashmap
if character available then get value,  & increment value by 1

chech maximum character occurance, check unique char

*/ 

import java.util.HashMap;
import java.util.Scanner;

class program776
{

    public static void main(String A[])
    {
        int iCount = 0;

        //char ch = '\0';

        Scanner sobj = new Scanner(System.in);

        HashMap <Character, Integer> hobj = new HashMap<Character, Integer>();

        System.out.println("Enter the String");
        String str= sobj.nextLine();
        

        char Arr[] = str.toCharArray();

        for(char ch : Arr)              // for each loop   : drawback : its unconditional loop, not controllable
        {
            if (hobj.containsKey(ch))   // if contains character the check key
                {
                    iCount = hobj.get(ch);
                    hobj.put(ch,iCount+1);              // increment value by 1 if already available
                    
                }
            else
                {
                    hobj.put(ch,1);
                }            
        }
        
        char Brr[] = new char[hobj.size()];   // store unique keys
        int i =0;
     
        for(char cValue : hobj.keySet())
        {
            Brr[i] = cValue;
            i++;
        }
            
        
        System.out.println(new String(Brr));          // unique keys
        
    }
}