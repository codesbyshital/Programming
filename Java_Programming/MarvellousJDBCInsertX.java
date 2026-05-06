import java.sql.*;

public class MarvellousJDBCInsertX
{
    public static void main(String A[])
    {
        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");

            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA54","root","");
                        
            String query = "insert into student(rno,name,city,marks) values (?,?,?,?)";

            PreparedStatement pstmt = con.prepareStatement(query);

            //set values
            pstmt.setInt(1,11);
            pstmt.setString(2,"Ajit");
            pstmt.setString(3,"Baramati");
            pstmt.setInt(4,78);

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
