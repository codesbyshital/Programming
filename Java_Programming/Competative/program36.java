import java.util.*;

class program36
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;

        System.out.println("Enter your Name");
        sName = sobj.nextLine();

        System.out.println("Enter your Age");
        iAge = sobj.nextInt();

        System.out.println("Enter your Marks");
        fMarks   = sobj.nextFloat();
        
        System.out.println("Name is :"+sName);
        System.out.println("Age is :"+iAge);
        System.out.println("Marks is :"+fMarks);

        sobj.close();

    }
    
}