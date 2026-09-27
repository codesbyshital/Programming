//Input : 7  
//Output: A * B *  C  *  D


import java.util.Scanner;

class program184
{
    static public void Display(int iNO)
    {
        int iCnt = 0;
        char ch = '\0';
        
        for(iCnt = 1, ch = 'A'; iCnt <= iNO; iCnt++)
        {         
            if(iCnt % 2 == 0)   
            {
                System.out.print("*\t"); 
            }
            else
            {
                System.out.print(ch+"\t");
                ch++ ;
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

