class Pattern
{
    public int i,j;

    public Pattern()
    {
        i = 0;
        j = 0;
    }

    public void Display()
    {
        for(i=1; i<=5 ; i++)
        {
            for(j=1; j<=i; j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}


class StarPattern
{
    public static void main(String A[])
    {
       Pattern pobj = new Pattern();
        pobj.Display();
        
    }
}