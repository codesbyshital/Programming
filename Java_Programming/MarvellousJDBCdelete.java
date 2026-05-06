import java.util.Scanner;
import java.sql.*;

public class MarvellousJDBCdelete
{
    public static void main(String A[])
    {
        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");

            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA54","root","");
                        
           // String query = "delete from student where rno = ?";

            PreparedStatement pstmt = con.prepareStatement("delete from student where rno = ?");

            Scanner sc = new Scanner(System.in);

            System.out.println("Enter Roll No to delete ");
            int Rno = sc.nextInt();

            pstmt.setInt(1,Rno);   //where rno =11
           

            int result = pstmt.executeUpdate();

            if(result>0)
            {
                System.out.println("Record deleted successfully.");
            }
            else
            {
                System.out.println("No record found to delete");
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
