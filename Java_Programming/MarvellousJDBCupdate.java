import java.sql.*;

public class MarvellousJDBCupdate
{
    public static void main(String A[])
    {
        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");

            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA54","root","");
                        
            // update query using primary key Rollno.
            String query = "update student SET marks = ? where rno = ?";

            PreparedStatement pstmt = con.prepareStatement(query);

            pstmt.setInt(1,96);   //set marks = 96
            pstmt.setInt(2,11);   //where rno =11
           

            int result = pstmt.executeUpdate();

            if(result>0)
            {
                System.out.println("Record Updated successfully.");
            }
            else
            {
                System.out.println("No record found to update");
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
