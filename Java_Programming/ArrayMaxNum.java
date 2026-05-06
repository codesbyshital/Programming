import java.util.Scanner;

class ArrayMaxNum
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

        System.out.println("Length of Array"+Marks.length);

        // Use of memory

        System.out.println("Enter your Marks: ");
        for(i=0; i<Size; i++)
        {
            Marks[i] = sobj.nextFloat();
        }

        System.out.println("Entered Marks are :");
        for(i=0; i<Size; i++)
        {
            System.out.println(Marks[i]);
        }

        float Max = Marks[0];

        for(i=1; i<Size; i++)
        {
            if (Marks[i]>Max)
            {
                Max = Marks[i];
            }
             
        }

        float Min = Marks[0];

        for(i=1; i<Size; i++)
        {
            if (Marks[i]< Min)
            {
                Min = Marks[i];
            }
             
        }

        System.out.println("Maximum Marks from Array is: "+Max);
        System.out.println("Minimum Mark from Array is: "+Min);

        Marks = null;
        System.gc();

    }
}