class Marvellous 
{
    public int i,j,k;

    public Marvellous(int A, int B, int C) 
    {
        this.i = A;
        this.j = B;
        this.k = C;
    }


    
}

public class EqualsDemo
{
    public static void main(String A[]) 
    {
        Marvellous mobj1 = new Marvellous(11, 21, 51);
        Marvellous mobj2 = new Marvellous(11, 21, 51);
        
        if(mobj1.equals(mobj2))
        {
            System.out.println("Objects are Identical");
        }
        else
        {
            System.out.println("Objects are Differrent");
        }
        
    }
    
}
