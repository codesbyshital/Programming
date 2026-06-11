/*
Java Program to accept Array elements, Display the Array elements & do Summation of the elements with Object Oriented 
concepts
*/
import java.util.Scanner;

class ArrayX
{
    
    private int Arr[] = null;
    private int iSize;
    public int iCnt;
    
    public ArrayX(int X)
        {       
            iSize = X;               
            Arr = new int[iSize];   
        }

        
    void Accept()
        {
            Scanner sobj = new Scanner(System.in);
            
            System.out.println("Enter the Elements");

            for(iCnt = 0; iCnt < Arr.length; iCnt++)
            {
                Arr[iCnt] = sobj.nextInt();
            } 

            
        }

    void Display()
        {
            System.out.println("Elements of the Array are: ");
            for(iCnt = 0; iCnt < Arr.length; iCnt++)
            {
                System.out.println(Arr[iCnt]);
            }      
        }

    int Summation()
        {
            int iSum = 0;

            for(iCnt = 0; iCnt < Arr.length; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }

}

class program170
{
        public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in); 
            
        System.out.println("Enter the number of elements");
        int iLength = sobj.nextInt();
          
        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();

        int iRet = aobj.Summation();

        System.out.println("Summation of Array Element : "+iRet);

        sobj = null;
        System.gc();
    
    }
}


/*
Enter the Number of Elements
5
Enter the Elements
1
2
3
4
5
Elements of Array are :
1
2
3
4
5
Summation is: 15

*/