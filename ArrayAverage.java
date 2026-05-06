import java.util.Scanner;

class ArrayAverage
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Size = 0;
        int i = 0;
        float sum = 0;

        System.out.println("Enter Number of Elements : ");
        Size = sobj.nextInt();

        //Dynamic Memory Allocation

        int Marks[] = new int[Size];

        // Use of memory

        System.out.println("Enter your Elements: ");
        for(i=0; i<Size; i++)
        {
            Marks[i] = sobj.nextInt();
        }

        System.out.println("Entered Elements are :");
        for(i=0; i<Size; i++)
        {
            System.out.println(Marks[i]+"\t");
        }

        for(i=0; i<Size; i++)
        {
            sum = sum + Marks[i];
        }

        double avg = (double)sum/Size;
        System.out.println("Average of Array element is: "+avg);

        Marks = null;
        System.gc();

    }
}