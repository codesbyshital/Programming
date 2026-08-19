/*
    /*
    problems on Numbers & digits started:
    
    Automorphic number: whos square ends with exact same digit as the smae digit

    Ex: 25 : 625  : ends with 25 , 
    6 : 36 : ends with 6    

*/ 

import java.io.BufferedReader;
import java.io.InputStreamReader;


class program829
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 0;
        int iTemp = 0, iDigit = 0;
        int iSquare = 0;
        int iDen = 0;
    

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the number :");
        iNo = Integer.parseInt(bobj.readLine());       

        iTemp =  iNo;

        iSquare = iNo * iNo;   // calculate square

        while(iNo != 0)
        {
            if((iNo % 10) != (iSquare % 10))    // new logic
            {
                break;
            }

            iNo = iNo / 10;
            iSquare = iSquare / 10;
        }

        if(iNo == 0)
         System.out.println("It is Automorphic Number :");

        else
            System.out.println("It is not Automorphic Number :");
       
    }
}