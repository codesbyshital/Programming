// Inuput : my name is amit
// Output : My Name Is Amit

// Inuput : my NAME is AmIt
// Output : My Name Is Amit

// first letter of each word should be capital

import java.util.*;

class program741
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        str = str.toLowerCase();   // convert all to lowercase

        char Arr[] = str.toCharArray();   // string to char array
       

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ' ')   // search space & then letter after space should be capital
            {
                if(Arr[i+1] >= 'a' && Arr[i+1] <= 'z')
                {
                    Arr[i+1] = (char)(Arr[i+1] - 32);
                }
            }
        }

        String output = new String(Arr);
        
        System.out.println("Updated string is : "+output);
    }
}