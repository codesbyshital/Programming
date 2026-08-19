
import java.util.Scanner;

/*
    Matrix : 

*/ 

class program787
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        
        int Arr[][] = {{10,20,30},{40,50,60},{70,80,90}};   // matrix array
      
        for(int i = 0; i < Arr.length ; i++)                // row
        {
            for(int j = 0; j < Arr[i].length; j++)          //col
            {
                System.out.print(Arr[i][j]+"\t");           
            }         
            System.out.println();
        
        }      

        
    }
}