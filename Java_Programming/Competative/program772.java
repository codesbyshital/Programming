// hashmap   == check characters & insert into hashmap

import java.util.Scanner;

class program772
{

    public static void main(String A[])
    {
        //int i = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str= sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(char ch : Arr)              // for each loop   : drawback : its unconditional loop, not controllable
        {
            System.out.println(ch);
        }
        
    }
}