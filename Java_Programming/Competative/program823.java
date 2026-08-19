/*
    problems on Numbers & digits started:
    
    Automorphic number: whos square ends with exact same digit as the smae digit

    Ex: 25 : 625  : ends with 25 , 
    6 : 36 : ends with 6
    

*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;


class program823
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 0;
        int iTemp = 0, iDigit = 0;
        int iSquare = 0;

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the number :");
        iNo = Integer.parseInt(bobj.readLine());       

        iTemp =  iNo;

        iSquare = iNo * iNo;   // calculate square

        int iCount = 0;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }
        



    }
}