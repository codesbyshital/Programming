import java.util.*;

class SortingMethods
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        int size = 0;
        int i=0, j=0, temp=0;

        System.out.println("Enter Array Size: ");
        size = sc.nextInt();

        int Arr[] = new int[size];

        System.out.println("Enter Array Elements: ");
        for(i=0; i<size; i++)
        {
            Arr[i] = sc.nextInt();
        }

        System.out.println("Entered Array is : ");
        for(i=0; i<size; i++)
        {
            System.out.print(Arr[i]+" ");
        }

System.out.println("\n");


//Sorting Techniques-----------
        // 1. Bubble Sort : --------------
        for(i=0; i<size; i++)
        {
            for(j=0; j<size-1; j++)
            {
                if(Arr[j]>Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j]=Arr[j+1];
                    Arr[j+1] = temp;
                }
            }
            
        }
        
        System.out.println("Sorted Array using Bubble Sort is : ");
        for(i=0; i<size; i++)
        {
            System.out.print(Arr[i]+" ");
        }


        // 2. Selection sort---------
        for(i=0; i<size-1; i++)
        {
            int min = i;

            for(j= i+1; j<size; j++)
            {
                if(Arr[j]<Arr[min])
                {
                    min = j;
                }
            }
            temp = Arr[min];
            Arr[min] = Arr[i];
            Arr[i] = temp;
            
        }

        System.out.println("\nSoted Array with Selection Sort is :");
            for(i=0; i<size; i++)
            {
                System.out.print(Arr[i]+" ");
            }


    // 2. Insertion sort---------
        for(i=1;i<size;i++)
        {
            int key = Arr[i];
            j = i-1;

            while(j>=0 && Arr[j] > key)
            {
                Arr[j+1] = Arr[j];
                j--;
            }

            Arr[j+1] = key;
        }
        System.out.println("\nSoted Array with Insertion Sort is :");
            for(i=0; i<size; i++)
            {
                System.out.print(Arr[i]+" ");
            }   

// using Array.sort method--------------------------------------

        Arrays.sort(Arr);

    System.out.println("\nSoted Array with Arrys_ Sort is :");
        for(i=0; i<size; i++)
        {
            System.out.print(Arr[i]+" ");
        }


    }
}