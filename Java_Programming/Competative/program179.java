//Input : 7  
//Output: a  b   c   d   e   f   g


import java.util.Scanner;

class program179
{
    static public void Display(int iNO)
    {
        int iCnt = 0;
        char ch = 'a';
        
        for(iCnt = 1; iCnt <= iNO; iCnt++)
        {            
            System.out.print(ch+"\t");                           
            ch++;
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

