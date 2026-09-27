//Input : 11 
//Output: * * * # # # * * *  # # # * *

// nested loop 
//

import java.util.Scanner;

class program188
{
    static public void Display(int iNO)
    {
        int i = 0;
        boolean flag = true;
        
        while(iNO > 0)
        {
            for(i = 1; i <= 3 && iNO > 0; i++)
            {     
                if(flag)  
                {
                 System.out.print("*\t");             

                }
                else
                {
                    System.out.print("#\t");      

                }
                iNO--;
            }
            flag = !flag;    
                    
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

