/*
    problems on Numbers & digits started:
    Amstrong number : 153 : 1^3 + 5^3 + 3^3    (rest to number of digits)

    calculate power  : x = 3 , y = 5 :   3^5 = = 3*3*3*3*3

    inbuilt function for power : math.pow()
    count digits

*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;


class program817
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 0;
        int iCount = 0, iTemp = 0;

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the number :");
        iNo = Integer.parseInt(bobj.readLine());       

        iTemp = iNo;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;             // check digits
        }
        
        iNo = iTemp;   // reassign value of number

        int iDigit = 0;
        int iSum = 0;

        // 153 =  3 ^ 3 + 5^3 + 1^3   : calculate seperate digits & do sum

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + (int)Math.pow(iDigit,iCount);     //153 =  3 ^ 3 + 5^3 + 1^3
            iNo = iNo / 10;
        }

        if(iSum == iTemp)
            System.out.println("It is Amstrong Number ");
        else
            System.out.println("It is not Amstrong Number ");
        
    }
}