import java.util.*;
import java.util.concurrent.Flow.Subscriber;

class program738
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        String Tokens[] = str.split(" ");

        System.out.println("Number of words : "+Tokens.length);

        int iMax = 0;
        String temp = null;

        for(int i = 0; i < Tokens.length; i++)
        {
            if(Tokens[i].length() >= iMax)
            {
                iMax = Tokens[i].length();      // max length
                temp = Tokens[i];           // max word
            }
        }

        System.out.println("All words with maximum length : ");

        for(int i = 0; i < Tokens.length; i++)
        {
            if(Tokens[i].length() == iMax)              // calculate all max words (words with same length)
            {
                System.out.println(Tokens[i]);
            }
        }

    }
}