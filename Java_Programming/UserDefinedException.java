import java.util.*;

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}
class UserDefinedException
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter your Age");
        int Age = sobj.nextInt();

        try
        {
            if(Age<18)
            {
                throw new AgeInvalid("You are under Age criteria..");
            }
            else
                System.out.println("You are Valid to attend Session");

        }
        catch(AgeInvalid aobj)
        {
            System.out.println("Inside Catch : "+aobj);
        }

        

        
    }
}