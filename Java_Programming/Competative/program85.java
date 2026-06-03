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

            if(iDigit == 7)
            {
                iCount++;
            }
                
            iNo = iNo / 10;
                        
        }
        return iCount;

    }
}

class program85
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

        System.out.println("\n Count of 7 in number is: "+iRet);
        
    }
}


// Counts the 7 digit in the

// Input : 57871
//output : Count of 7 in number is : 2