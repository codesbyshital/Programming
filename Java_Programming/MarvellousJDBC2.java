import java.sql.*;

public class MarvellousJDBC2
{
    public static void main(String A[])
    {
        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");

            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA54","root","");
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery("select * from course");

            while(rs.next())
            {
                System.out.println("RollNo :"+rs.getInt("rno"));
                System.out.println("Name :"+rs.getString("cname"));              
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
