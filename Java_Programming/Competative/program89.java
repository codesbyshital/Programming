import java.util.Scanner;

class DigitX
{
    public int SumDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;     
            
            // iSum = iSum + (iNo % 10);    // without iDigit
             
            iNo = iNo / 10;
                        
        }
        return iSum;

    }
}

class program89
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
        int iRet = 0;

        int iValue = 0;
        System.out.println("Enter Number");
        
        iValue = sobj.nextInt();

        iRet = dobj.SumDigits(iValue);

        System.out.println("\n Sum of digits : "+iRet);
        
    }
}


// Sum digit in the number

// Input : 7856
//output : Sum of Digits : 2