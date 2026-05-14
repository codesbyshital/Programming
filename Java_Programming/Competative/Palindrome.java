import java.util.*;

class Palindrome
{
    public static void main(String A[])
    {
                
        String str = "";
        String rev = "";

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your String: ");
        str = sc.nextLine();

        for(int i=str.length()-1;i>=0;i--)
        {
            rev = rev + str.charAt(i);
        }

        if(str.equals(rev))
            System.out.println("Entered String is Palindrome");
        else
            System.out.println("Entered String is Not Palindrome");
            
    }
}