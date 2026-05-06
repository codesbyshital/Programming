import java.util.*;

class DivisionException
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0, no2 = 0, Ans = 0;

        System.out.println("Enter first number");
        no1 = sobj.nextInt();
        System.out.println("Enter Second number");
        no2 = sobj.nextInt();
        try
        {
            System.out.println("Inside Try block");
            Ans = no1 / no2;   //Exception prone code

        }
        catch(ArithmeticException aobj)
        {
            System.out.println("Inside Catch block");
            System.out.println("Exception occured: "+aobj);
        }
                

        System.out.println("Division is: "+Ans);

    
    }
}