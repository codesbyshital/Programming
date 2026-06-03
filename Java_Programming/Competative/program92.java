import java.util.Scanner;

class DigitX
{
    public int RevNumber(int iNo)
    {
    
        int iDigit = 0;
        int iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
                       
            iRev = (iRev * 10) + iDigit;
             
            iNo = iNo / 10;
                        
        }
        return iRev;

    }
}

class program92
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
        int iRet = 0;
        int iValue = 0;
        
        System.out.println("Enter Number : ");
        
        iValue = sobj.nextInt();

        iRet = dobj.RevNumber(iValue);

        System.out.println("\n Reverse Number is : "+iRet);
        
    }
}


// Reverse the number

// Input : 78561
//output : Sum of Digits : 16587