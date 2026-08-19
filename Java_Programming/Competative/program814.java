/*
    problems on Numbers & digits started:
    Amstrong number : 153 : 1^3 + 5^3 + 3^3    (rest to number of digits)

    calculate power  : x = 3 , y = 5 :   3^5 = = 3*3*3*3*3

    inbuilt function for power : math.pow()

*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;


class program814
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int x = 0, y = 0, i = 0;
        int iPower = 0;

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the number as a base:");
        x = Integer.parseInt(bobj.readLine());       

        System.out.println("Enter the number as a power:");
        y = Integer.parseInt(bobj.readLine());       
        
        iPower = (int)Math.pow(x,y);        

       System.out.println("Result is :"+iPower);
        
    }
}