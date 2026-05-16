import java.util.*;


class StringOperation
{
    public static void main(String A[])
    {
        String s1 = "Hello ";
        String s2 = "Shital";

//-----------Concatenate String-----------------------------
        String result = s1.concat(s2);
        System.out.println(result);

//-----------Upper/Lower Case String-----------------------------
        String str = "Welcome to Marvellous Infosystem...";
        System.out.println(str.toUpperCase());
        System.out.println(str.toLowerCase());

//-----------Compare String-----------------------------

        Scanner sobj = new Scanner(System.in);
              
        System.out.println("Enter first String..");
        String str1 = sobj.nextLine();

        System.out.println("Enter first String..");
        String str2 = sobj.nextLine();


        if(str1.equals(str2))
        {
            System.out.println("Strings are equal..");
        }
        else
            System.out.println("Strings are not equal..");


//--------Reverse String----------------------------
        String rev = "";

        for(int i = str1.length()-1; i >= 0; i--)
        {
            rev = rev + str1.charAt(i);
        }
         System.out.println("Reverse Strings : "+rev);


    }
}