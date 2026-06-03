import java.util.*;

class NumberX
{
    public int SumFactors(int iNo)
    {
        int iCnt = 0 ;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2) ; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
            
        }

        return iSum;

    }
}



class program49
{
    public static void main(String A[])
    {
        int iValue = 0;
        int iRet = 0;
                
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Number");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        iRet = nobj.SumFactors(iValue);   
        
        System.out.println("Summation of Factors : "+iRet);        
        
    }
    
}

//Time Complexity : O(N/2)
//where N >=0