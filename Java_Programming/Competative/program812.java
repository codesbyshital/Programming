/*
    problems on Numbers & digits started:
    Amstrong number : 153 : 1^3 + 5^3 + 3^3    (rest to number of digits)

    calculate power  : x = 3 , y = 5 :   3^5 = = 3*3*3*3*3

*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;


class program812
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
        
        iPower  = 1 ;

        for(i = 1 ; i <= y; i++)
        {
            iPower = iPower * x;
        }
       System.out.println("Result is :"+iPower);
        
    }
}