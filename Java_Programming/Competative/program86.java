import java.util.Scanner;

class DigitX
{
    public int CountEvenDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iCount++;
            }
                
            iNo = iNo / 10;
                        
        }
        return iCount;

    }
}

class program86
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
        int iRet = 0;

        int iValue = 0;
        System.out.println("Enter Number \n");
        
        iValue = sobj.nextInt();

        iRet = dobj.CountEvenDigits(iValue);

        System.out.println("\n Count of Even digits are: "+iRet);
        
    }
}


// Counts the Even digit in the number

// Input : 7856
//output : Count of Even digits are : 2