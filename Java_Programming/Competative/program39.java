//Type 1

import java.util.*;

class program39
{
    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter yur Number");
        iValue = sobj.nextInt();

        if((iValue % 3 ==0) && (iValue % 5 ==0))
        {
            System.out.println("Number is Divisible by both 3 & 5");
        }
        else
        {
            System.out.println("Number is not Divisible by both 3 & 5");

        }        

    }
    
}