import java.util.*;
import java.sql.*;


// All CRUD Operations : Create, Read, Update, Delete

class JDBCcrud
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");    //Explicitely calling jdbc driver
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA54","root","");

            int choice =0;

            while(choice != 5)
            {
                System.out.println("\n---- MENU -----");
                System.out.println("1. Display Records");
                System.out.println("2. Insert Record");
                System.out.println("3. Update Record");
                System.out.println("4. Delete Record");
                System.out.println("5. Exit");

                System.out.println("Enter your Choice..");
                choice = sc.nextInt();
                
                switch(choice)
                {
                    case 1:     //Display record (Read)
                            Statement stmt = con.createStatement();
                            ResultSet rs = stmt.executeQuery("select * from Student");

                            System.out.println("\n--- Records ---");
                            while(rs.next())
                            {
                                System.out.println("RollNo :"+rs.getInt("rno"));
                                System.out.println("Name :"+rs.getString("name"));
                                System.out.println("City :"+rs.getString("city"));
                                System.out.println("Marks :"+rs.getInt("marks"));
                                System.out.println("-------------------------------------");
                            }
                            rs.close();
                            stmt.close();

                            break;

                    case 2:     // Insert record   (Create)
                            String query = "insert into student(rno,name,city,marks) values (?,?,?,?)";

                            PreparedStatement pstmt = con.prepareStatement(query);

                            System.out.print("Enter Roll No: ");
                            int Rno = sc.nextInt();

                            System.out.print("Enter Name: ");
                            String Name = sc.next();

                            System.out.print("Enter City: ");
                            String City = sc.next();

                            System.out.print("Enter Marks: ");
                            int Marks = sc.nextInt();

                            pstmt.setInt(1, Rno);
                            pstmt.setString(2, Name);
                            pstmt.setString(3, City);
                            pstmt.setInt(4, Marks);

                            int ires = pstmt.executeUpdate();

                            if(ires>0)
                            {
                                System.out.println("Record inserted successfully.");
                            }
                            else
                            {
                                System.out.println("Insertion failed.");
                            }

                            pstmt.close();
                            break;
                    
                    case 3:   // Update record   (Update)
                            String uquery = "update student SET marks = ? where rno = ?";

                            PreparedStatement ustmt = con.prepareStatement(uquery);                          

                            System.out.print("Enter Rollno to update: ");
                            int urno = sc.nextInt();

                            System.out.print("Enter New Marks for updation: ");
                            int umarks = sc.nextInt();
                            
                            ustmt.setInt(1, umarks);
                            ustmt.setInt(2, urno);   //where rno =11                                    

                            int ures = ustmt.executeUpdate();

                            if(ures>0)
                            {
                                System.out.println("Record Updated successfully.");
                            }
                            else
                            {
                                System.out.println("No record found to update");
                            }
                            ustmt.close();
                            break;

                    case 4:  // Delete Record   (Delete)
                            PreparedStatement dstmt = con.prepareStatement("delete from student where rno = ?");
                            
                            System.out.println("Enter Roll No to delete ");
                            int drno = sc.nextInt();

                            dstmt.setInt(1,drno);   //where rno =11
                        

                            int dres = dstmt.executeUpdate();

                            if(dres>0)
                            {
                                System.out.println("Record deleted successfully.");
                            }
                            else
                            {
                                System.out.println("No record found to delete");
                            }

                            dstmt.close();
                            break;
                            

                    case 5:
                                System.out.println("Exiting...");
                                break;

                    default:
                        System.out.println("Invalid choice!");
                        
                }  //switch end                                

            }  //while end

              
        con.close();
        sc.close();

        }
        catch(Exception e)
        {
            System.out.println("Exception : "+e);
        }
       
    }
}