import java.util.Scanner;

class DynamicMemory
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Size = 0;

        System.out.println("Enter Number of Elements : ");
        Size = sobj.nextInt();

        //Dynamic Memory Allocation

        float Marks[] = new float[Size];

        // Use of memory
        

        Marks = null;
        System.gc();

    }
}