class Arithmatic
{
    public int no1, no2;

    public Arithmatic()
    {

    }
    public Arithmatic(int value1, int value2)
    {
        this.no1 = value1;
        this.no2 = value2;
        
    }

    public int Addition()
    {
        int Ans = 0;
        Ans = this.no1 + this.no2;
        return Ans;
    }

    public int Substration()
    {
        int Ans = 0;
        Ans = this.no1 - this.no2;
        return Ans;
    }
}


class First
{
 public static void main(String A[])
 {
    System.out.println("Inside Main");
    Arithmatic aobj = new Arithmatic(10,11);

    int Result = 0;

    Result = aobj.Addition();
    System.out.println("Addition is"+Result);
    Result = aobj.Substration();
    System.out.println("Sustraction is"+Result);

 }
}