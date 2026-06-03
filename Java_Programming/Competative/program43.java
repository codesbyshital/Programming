//Type 2

import java.util.*;

class program43
{
    public static boolean CheckDivisible(int iNo)    // return value boolean to remove SOP
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
            {
                return true;
            }
        else
            {
                return false;
            }        

    }
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Number");
        iValue = sobj.nextInt();
        
        bRet= CheckDivisible(iValue);

        if(bRet == true)
        {
            System.out.println("Number is Divisible by both 3 & 5");
        }
        else
        {
            System.out.println("Number is not Divisible by both 3 & 5");
        }
           
        
    }
    
}