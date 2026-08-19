/*
    problems on Numbers & digits started:
    Amstrong number : 153 : 1^3 + 5^3 + 3^3    (rest to number of digits)

    calculate power  : x = 3 , y = 5 :   3^5 = = 3*3*3*3*3

    inbuilt function for power : math.pow()
    count digits

*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;


class program815
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 0;
        int iCount = 0, iTemp = 0;

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the number :");
        iNo = Integer.parseInt(bobj.readLine());       

        String str = String.valueOf(iNo);   // string conversion

        System.out.println("Number of Digits are :"+str);

        
    }
}