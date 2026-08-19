/*
    problems on Numbers & digits started:
    accept number & find factorial
    5! : 5*4*3*2*1

    long primitive data type : long
    inbuilt method for factorial is not available in java

    strong number :  sum of factorial of individual digits = that number
*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;



class program810
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 0;
        long iFact = 0, iSum = 0;

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the number:");
        iNo = Integer.parseInt(bobj.readLine());       

        iFact = 1;
        int iTemp = 0,  iDigit = 0;

        iTemp = iNo;            // preserve the iNo value for comparision

       while(iNo != 0)
        {
            iDigit = iNo % 10;

            while(iDigit != 0)
            {
                iFact = iFact * iDigit;
                iDigit--;
            }

            iSum = iSum + iFact;                // both are long

            iNo = iNo / 10;            

            iFact = 1;    // reset the iFact
        } 

        if(iSum == iTemp)
        {
            System.out.println("It is Strong Number : ");   
        }
        else
        {
            System.out.println("It is not Strong Number : "); 
        }       

        
    }
}