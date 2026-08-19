/*
    /*
    problems on Numbers & digits started:
    
    Automorphic number: whos square ends with exact same digit as the smae digit

    Ex: 25 : 625  : ends with 25 , 
    6 : 36 : ends with 6    

*/ 


import java.io.BufferedReader;
import java.io.InputStreamReader;


class program828
{
    public static void main(String A[]) throws Exception                // it generates exception
    {
        int iNo = 0;
        int iTemp = 0, iDigit = 0;
        int iSquare = 0;
        int iCount = 0;

        // input through bufferred stream IO
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the number :");
        iNo = Integer.parseInt(bobj.readLine());       

        String strNo = String.valueOf(iNo);   // convert to string

        iCount = strNo.length();   // length of syring = number of digits

        iSquare = iNo * iNo;   // Square

        String strSquare = String.valueOf(iSquare);

        if(strSquare.endsWith(strNo))
        {
            System.out.println("It is Automorphic number");
        }
        else
        {
            System.out.println("It is not Automorphic number");
        }

    }
}