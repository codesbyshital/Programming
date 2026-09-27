//Input : 7  
//Output: A    b    C   d   E   f   G


import java.util.Scanner;

class program187
{
    static public void Display(int iNO)
    {
        int iCnt = 0;
        char ch = '\0';
        char ch1 = '\0';
        
        for(iCnt = 1, ch = 'A', ch1 = 'a'; iCnt <= iNO; iCnt++, ch++, ch1++)
        {         
            if(iCnt % 2 == 0)   
            {
                System.out.print(ch1+"\t"); 
            }
            else
            {
                System.out.print(ch+"\t"); 
                
            }         

           
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

