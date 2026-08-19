/*
    problems on Numbers & digits started:
    Harshad Number : 12  : digit 2 : 1+2  = 3 : 12 / 3 = complete divisible by sum of its digits

    Sum of digits

*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;


class program818
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 0;
        int iSum = 0, iTemp = 0, iDigit = 0;

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the number :");
        iNo = Integer.parseInt(bobj.readLine());       


        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;     //sum of digits 
            iNo = iNo / 10;
        }

        System.out.println("Sum of digit :"+iSum);
        
    }
}