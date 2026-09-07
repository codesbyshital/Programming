import java.io.*;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Scanner;


class StudyLog  
{
   private LocalDate Date;
   private String Subject;
   private double Duration;
   private String Description;

   public StudyLog(LocalDate a, String b, double c, String d)
   {
      this.Date = a;
      this.Subject = b;
      this.Duration = c;
      this.Description = d;
   }
   
   public String toString()
   {
      return Date + " | " + Subject + " | " + Duration + " | " + Description;
   }
   public LocalDate getDate()
   {
      return this.Date;
   }
   public String getSubject()
   {
      return this.Subject;
   }
   public double getDuration()
   {
      return this.Duration;
   }
   public String getDescription()
   {
      return this.Description;
   }
}

class StudyTracker
{
   public ArrayList <StudyLog>Database;

   public StudyTracker()
   {
      Database = new ArrayList<StudyLog>();
   }
}

class program856
{
   public static void main(String[] args)
   {
      int iChoice = 0;
      StudyTracker stobj = new StudyTracker();
      Scanner sobj = new Scanner(System.in);
      
      System.out.println("--------------------------------------------");
      System.out.println("-----Welcome to Marvellous Study tracker----");
      System.out.println("--------------------------------------------");
      
      //Shell to interact with end user      
      do
      {
         System.out.println("--------------------------------------------");
         System.out.println("Please select appropriate option");
         System.out.println("--------------------------------------------");

         System.out.println("1 : Insert New Study Log");
         System.out.println("2 : View all Study Logs");
         System.out.println("3 : Export Study Log to CSV");
         System.out.println("4 : Summary of Study Log by Date");
         System.out.println("5 : Summary of Stydy Log by Subject");
         System.out.println("6 : Exit");
         
         System.out.println("--------------------------------------------");

         iChoice = sobj.nextInt();
      }
      while(iChoice != 6);

      System.out.println("--------------------------------------------");
      System.out.println("------Thankyou for using Stydy Tracker------");
      System.out.println("--------------------------------------------");

      
   }
}