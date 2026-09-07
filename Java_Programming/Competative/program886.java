import java.util.Arrays;

public class program886
{
    public static void main(String A[])
    {
        int Arr[] = {10,13,34,21,15,7,24};   // static

        for (int no : Arr )
        {
            System.out.print(no + "\t");
        }
        System.out.println();

        Arrays.sort(Arr,2,6);    // starting inclusive , end not inclusive

        for (int no : Arr )
        {
            System.out.print(no + "\t");
        }
        System.out.println();

    }
}
