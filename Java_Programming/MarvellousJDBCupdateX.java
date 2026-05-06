import java.util.Scanner;
import java.sql.*;

public class MarvellousJDBCupdateX
{
    public static void main(String A[])
    {
        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");

            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA54","root","");
                        
            String query = "update student SET marks = ? where rno = ?";

            PreparedStatement pstmt = con.prepareStatement(query);

            Scanner sc = new Scanner(System.in);

            System.out.print("Enter Rollno to update: ");
            int Rno = sc.nextInt();

            System.out.print("Enter New Marks for updation: ");
            int Marks = sc.nextInt();

            
            pstmt.setInt(1, Marks);
            pstmt.setInt(2, Rno);   //where rno =11

                      

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
