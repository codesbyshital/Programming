import java.util.Scanner;

class ArrayCountEven
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

        int Count = 0;

        for(i=0; i<Size; i++)
        {
            if (Marks[i]%2 ==0)
            {
                Count++;
            }
             
        }
        
        System.out.println("Total number of Even Marks is: "+Count);
     

        Marks = null;
        System.gc();

    }
}