import java.util.*;



class Prime
{
    public int i;

    public Prime()
    {
        i = 0;
    }

    public Prime(int no1)
    {
        this.i = no1;
    }

    public void check()
    {
        if(i%2==0)
        {
            System.out.println("Entered number is Even number : ");
            
        }
        else
        {
            System.out.println("Entered number is Odd number");
            
        }
    }
}


class PrimeCheck
{
    public static void main(String A[])
    {
        int Res = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Inside Main......");
        System.out.println("Enter your Number to Check : ");
        Res = sobj.nextInt();

        Prime pobj = new Prime(Res);
        pobj.check();
        
    }
}