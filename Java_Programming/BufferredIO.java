import java.io.*;

class BufferedIO
{
    public static void main(String A[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter your Name : ");
        String Name = bobj.readLine();    // checked Exception

        System.out.println("Hello "+Name);

        
    }
}