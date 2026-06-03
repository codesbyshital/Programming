//Type 2

import java.util.*;

class program42
{
    public static void CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
            {
                System.out.println("Number is Divisible by both 3 & 5");
            }
        else
            {
                System.out.println("Number is not Divisible by both 3 & 5");

            }        

    }
    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Number");
        iValue = sobj.nextInt();
        
        CheckDivisible(iValue);

        
    }
    
}