import java.util.*;

class NumberX
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0 ;

        for(iCnt = 1; iCnt < iNo ; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program46
{
    public static void main(String A[])
    {
        int iValue = 0;
                
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Number");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        nobj.DisplayFactors(iValue);
        
        
    }
    
}


//Time Complexity : O(N)
//where N >=0