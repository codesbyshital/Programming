import java.util.Scanner;


class program171
{
    static public void Display(int iNO)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNO; iCnt++)
        {
            System.out.print("*\t");
        }

        System.out.println();
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in); 
            
        System.out.println("Enter the number of elements");
        int iValue = sobj.nextInt();
          
        Display(iValue);

    }
}

