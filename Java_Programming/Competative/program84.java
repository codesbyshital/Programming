import java.util.Scanner;

class DigitX
{
    public int CountDigits(int iNo)
    {
        //removed iDigit

        int iCount = 0;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
            
                        
        }
        return iCount;

    }
}

class program84
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