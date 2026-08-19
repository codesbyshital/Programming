/*
    problems on Numbers & digits started:
    Palindrome : 121 = 121  : 
    reverse the number
    

*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;


class program823
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 0;
        int iTemp = 0, iDigit = 0;
        int iRev = 0;

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the number :");
        iNo = Integer.parseInt(bobj.readLine());       

        //123 
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;        

            iNo = iNo / 10;
        }
        if(iRev == iTemp)      
            System.out.print("It is Palindrome");
        else
            System.out.print("It is not Palindrome");


    }
}