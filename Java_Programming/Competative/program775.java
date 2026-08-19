/*
hashmap   == check characters & insert into hashmap
if character available then get value,  & increment value by 1

chech maximum character occurance

*/ 

import java.util.HashMap;
import java.util.Scanner;

class program775
{

    public static void main(String A[])
    {
        int iCount = 0;

        //char ch = '\0';

        Scanner sobj = new Scanner(System.in);

        HashMap <Character, Integer> hobj = new HashMap<Character, Integer>();

        System.out.println("Enter the String");
        String str= sobj.nextLine();
        int iMax = 0;
        char temp = '\0';

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

        //System.out.println(hobj);

        for(char cValue : hobj.keySet())            // keys are characters
        {
            if(hobj.get(cValue) > iMax)
            iMax =hobj.get(cValue);
            temp = cValue;

        }
     
            System.err.println(temp+" Occurs Maximum time i.e :"+iMax);   // how many times the char
        
    }
}