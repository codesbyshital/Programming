import java.util.Scanner;

class DigitX
{
    public void DisplayDigit(int iNo)
    {
        //int iDigit = 0;

        while(iNo != 0)
        {
            //iDigit = iNo % 10;
            System.out.printf(iNo % 10 +"\t");
            iNo = iNo / 10;
        }

    }
}

class program80
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        System.out.println("Enter Number");
        
        iValue = sobj.nextInt();

        dobj.DisplayDigit(iValue);
        
    }
}