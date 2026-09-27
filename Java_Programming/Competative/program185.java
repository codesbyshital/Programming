//Input : 7  
//Output: A * C *  E    *   G


import java.util.Scanner;

class program185
{
    static public void Display(int iNO)
    {
        int iCnt = 0;
        char ch = '\0';
        
        for(iCnt = 1, ch = 'A'; iCnt <= iNO; iCnt++, ch++)
        {         
            if(iCnt % 2 == 0)   
            {
                System.out.print("*\t"); 
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

