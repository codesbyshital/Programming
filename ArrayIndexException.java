import java.util.*;

class ArrayIndex
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {11,21,51,101,111};
             

        System.out.println("Enter the Index of Array: ");
        int Index = sobj.nextInt();
        try
        {
            
            System.out.println("Element at that Index : "+Arr[Index]);
        }
        
        
        System.out.println("End of Application");


    
    }
}