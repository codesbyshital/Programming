// Arrays class : inbuilt methods   

import java.util.Arrays;

public class program888
{
    public static void main(String A[])
    {
        Integer Arr[] = {10,13,34,21,15,7,24};   // static  wrapper class

        for (int no : Arr )
        {
            System.out.print(no + "\t");
        }
        System.out.println();

        int index = Arrays.binarySearch(Arr, 27);

        if(index >= 0)        // Inbuilt method for Binary search
        {
            System.out.println("Element is present");
        }
        else
        {
            System.out.println("Element is not present");
        }

        for (int no : Arr )
        {
            System.out.print(no + "\t");
        }
        System.out.println();

    }
}
