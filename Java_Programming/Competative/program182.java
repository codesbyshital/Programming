//Input : 7  
//Output: A B   C   D   E   F   G


import java.util.Scanner;

class program182
{
    static public void Display(int iNO)
    {
        int iCnt = 0;
        char ch = '\0';
        
        for(iCnt = 1, ch = 65; iCnt <= iNO; iCnt++, ch++)
        {            
            System.out.print(ch+"\t");                           
           
        }

        System.out.println();
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in); 
            
        System.out.println("Enter the number of elements");
        int iValue = sobj.nextInt();
          
        Display(iValue);

    }
}

