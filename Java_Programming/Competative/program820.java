/*
    problems on Numbers & digits started:

    accept the range & display in between numbers add range logic 
    

*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;


class program819
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 0;
        int iSum = 0, iTemp = 0, iDigit = 0;

        int iStart = 0, iEnd = 0;  
        int i = 0; 

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the Starting point :");
        iStart = Integer.parseInt(bobj.readLine());       

        System.out.println("Enter the Ending point :");
        iEnd = Integer.parseInt(bobj.readLine());       

        System.out.println("Harshad Numbers are :");

        for(i = iStart; i <= iEnd; i++)
        {        
            iNo = i;    // index into number

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;     //sum of digits 
                iNo = iNo / 10;
            }

            if(i % iSum == 0)
            {
                System.out.println(i);
            }
           
            iSum = 0;
        
        }        
    }
}