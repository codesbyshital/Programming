import java.util.Scanner;

class DigitX
{
    public void CountEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iCountEven = 0;
        int iCountOdd = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iCountEven++;
            }

            else
            {
                iCountOdd++;
            }
                
            iNo = iNo / 10;
                                    
        }
        System.out.println("Count of Even Digit is:"+iCountEven);        
        
        System.out.println("Count of Odd Digit is:"+iCountOdd);

    }
}

class program88
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
        
        int iValue = 0;
        System.out.println("Enter Number");
        
        iValue = sobj.nextInt();

        dobj.CountEvenOddDigits(iValue);

                
    }
}


// Counts the Even & Odd digit in the number

// Input : 78561
//output : Count of Even digits are : 2
//          Count of Odd digits are : 3