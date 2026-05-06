import java.sql.*;

public class MarvellousJDBC
{
    public static void main(String A[])
    {
        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");

            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA54","root","");
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("select * from student");

            while(rs.next())
            {
                System.out.println("RollNo :"+rs.getInt("rno"));
                System.out.println("Name :"+rs.getString("name"));
                System.out.println("City :"+rs.getString("city"));
                System.out.println("Marks :"+rs.getInt("marks"));
                System.out.println("---------------------------------");
            }

            rs.close();
            stmt.close();
            con.close();

        }
        catch(Exception e)
        {
            System.out.println("Exception Occured:"+e);
        }

    }
}
