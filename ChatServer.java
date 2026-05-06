import java.io.*;
import java.net.*;


class ChatServer
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Server Appliction is Running.... ");

        ServerSocket ssobj = new ServerSocket(2100);

        System.out.println("Server is Waiting at Port : 2100");

        Socket sobj = ssobj.accept();

        System.out.println("Client Request gets accepted successfully");

        PrintStream pobj = new PrintStream(sobj.getOutputStream());

        BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));  //Output ears

        BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));  // keyboard

        System.out.println("--------------------------------------------------");
        System.out.println("------------Marvellous Chat Server----------------");
        System.out.println("--------------------------------------------------");

        String str1 = null , str2 = null;

        while((str1 = bobj1.readLine()) != null)
        {
            System.out.println("Client Says : "+str1);
            System.out.println("Entre Message for client : ");

            str2 = bobj2.readLine();
            pobj.println(str2);
            
        }

        sobj.close();
        ssobj.close();            
        
    }
}