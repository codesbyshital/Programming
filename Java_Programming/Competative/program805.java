/*
    problems on Numbers & digits started:
    accept number & find factorial

    5! : 5*4*3*2*1
    
*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;

class program805
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 0;
        int iFact = 0;

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the number:");
        iNo = Integer.parseInt(bobj.readLine());       

        iFact = 1;

        for(int i = 1 ; i <= iNo ; i++)
        {
            iFact = iFact * i;
        }

        System.out.println("Factorial is : "+iFact);        
        
    }
}