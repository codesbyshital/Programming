/*
    problems on Numbers & digits started:
    accept number & whether it is strong or not?
    
*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;

class program803
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 0, iSum = 0, iDigit = 0;

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the number:");
        iNo = Integer.parseInt(bobj.readLine());
        System.out.println("number is :"+iNo);

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
            System.out.println();       

        
    }
}