import java.util.Scanner;

class DigitX
{
    public int CountDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.printf(iDigit +"\t");
        
            iNo = iNo / 10;

            iCount++;
            
        }
        return iCount;

    }
}

class program83
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
        int iRet = 0;

        int iValue = 0;
        System.out.println("Enter Number \n");
        
        iValue = sobj.nextInt();

        iRet = dobj.CountDigits(iValue);

        System.out.println("\n Count of Digits are: "+iRet);
        
    }
}




// Input : 5688
//output : 8    8   6   5    Count of Digits are : 4