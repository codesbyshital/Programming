import java.util.Scanner;
import java.sql.*;

public class MarvellousJDBCInsertXX
{
    public static void main(String A[])
    {
        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");

            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA54","root","");
                        
            String query = "insert into student(rno,name,city,marks) values (?,?,?,?)";

            PreparedStatement pstmt = con.prepareStatement(query);

            Scanner sc = new Scanner(System.in);

            System.out.print("Enter Roll No: ");
            int Rno = sc.nextInt();

            System.out.print("Enter Name: ");
            String Name = sc.next();

            System.out.print("Enter City: ");
            String City = sc.next();

            System.out.print("Enter Marks: ");
            int Marks = sc.nextInt();

            //seting values entered by user.
            pstmt.setInt(1, Rno);
            pstmt.setString(2, Name);
            pstmt.setString(3, City);
            pstmt.setInt(4, Marks);

            int result = pstmt.executeUpdate();

            if(result>0)
            {
                System.out.println("Record inserted successfully.");
            }
                      
            pstmt.close();
            con.close();

        }
        catch(Exception e)
        {
            System.out.println("Exception Occured:"+e);
        }

    }
}
