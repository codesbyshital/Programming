import java.util.Arrays;
import java.util.Collections;

public class program887
{
    public static void main(String A[])
    {
        Integer Arr[] = {10,13,34,21,15,7,24};   // static  wrapper class

        for (int no : Arr )
        {
            System.out.print(no + "\t");
        }
        System.out.println();

        Arrays.sort(Arr,Collections.reverseOrder());    // starting inclusive , end not inclusive   sort in descending order.

        for (int no : Arr )
        {
            System.out.print(no + "\t");
        }
        System.out.println();

    }
}
