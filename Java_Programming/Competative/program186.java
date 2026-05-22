//Input : 7  
//Output: A 2 C 4  E   6   G


import java.util.Scanner;

class program186
{
    static public void Display(int iNO)
    {
        int iCnt = 0;
        char ch = '\0';
        
        for(iCnt = 1, ch = 'A'; iCnt <= iNO; iCnt++, ch++)
        {         
            if(iCnt % 2 == 0)   
            {
                System.out.print(iCnt+"\t"); 
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

