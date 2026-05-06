import java.util.Scanner;

class ArrayReverseOrder
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Size = 0;
        int i = 0;
        
        System.out.println("Enter Number of Elements : ");
        Size = sobj.nextInt();

        //Dynamic Memory Allocation

        float Marks[] = new float[Size];
    
        // Use of memory

        System.out.println("Enter your Array Elements: ");
        for(i=0; i<Size; i++)
        {
            Marks[i] = sobj.nextFloat();
        }

        System.out.println("Entered Array Elements are :");
        for(i=0; i<Size; i++)
        {
            System.out.print(Marks[i]+"\t");
        }

        
        System.out.println("\nReversed Array Elements are :");
        for(i=Size-1; i>=0; i--)
        {
            System.out.print(Marks[i]+"\t");
        }
                     

        Marks = null;
        System.gc();

    }
}