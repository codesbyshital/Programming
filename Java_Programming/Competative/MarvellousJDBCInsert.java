import java.sql.*;

public class MarvellousJDBCInsert
{
    public static void main(String A[])
    {
        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");

            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA54","root","");
            Statement stmt = con.createStatement();

            //insert values into student table.
            
            stmt.executeUpdate("insert into student values (10,'Shital','Baramati',98)");

            //displaying inserted values............
            Statement stmt1 = con.createStatement();
            System.out.println("Entered Values are : \n");
            ResultSet rs = stmt1.executeQuery("select * from student");
           
            
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
