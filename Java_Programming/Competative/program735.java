import java.util.*;

class program735
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        String Tokens[] = str.split(" ");

        System.out.println("Number of words : "+Tokens.length);     // words count

        for(int i = 0; i < Tokens.length; i++)     // count each words length..
        {
            System.out.println(Tokens[i]+" : "+Tokens[i].length()); // length method
        }

    }
}