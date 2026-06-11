import java.util.*;


class program145
{
    public static void Update(int Arr[], int iSize)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt]++;
            
        }

    }

    public static void main(String A[])
    {        
        int Brr[] = {10,20,30,40,50};
        int iCnt = 0;

        System.out.println("Array Elements Before function call");
        for(iCnt = 0; iCnt < 5; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        Update(Brr, 5);

        System.out.println("Array Elements After function call");
        for(iCnt = 0; iCnt < 5; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

    }
}