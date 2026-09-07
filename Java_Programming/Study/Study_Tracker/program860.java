/*
    Project :    Study Tracker : 
    java collections:
    ArrayList : to store info of students ( inbuilt linked list of java)   : its generic 
    String elemnets

    // getter setter methods

    SQL : simulate like sql queries..  : object.add()
    remove  : take subject name : compare subject name & remove it

    seperate function for queries  : select * from , insert into , update , delete

 */ 

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

   public void InsertLog()
   {
      Scanner sobj = new Scanner(System.in);
      System.out.println("--------------------------------------------");
      System.out.println("-------Enter the details of your study------");
      System.out.println("--------------------------------------------");

      LocalDate lobj = LocalDate.now();

      System.out.println("We are entering the entering the date as : "+lobj);

      System.out.println("Enter the name of Subject like C/C++/Java etc : ");
      String sub = sobj.nextLine();
      
      System.out.println("Provide the description of your study : ");
      String desc = sobj.nextLine();
      
      System.out.println("Enter the time period of your study : ");
      double dur = sobj.nextDouble();

      StudyLog studyobj = new StudyLog(lobj, sub, dur, desc);

      Database.add(studyobj);

      System.out.println("Study log is inserted successfully");
   }

   public void DisplayLog()
    {
      System.out.println("--------------------------------------------");

         // Database is empty....
      if(Database.isEmpty())
      {
         System.out.println("Nothing to Display as Database is Empty.");
         System.out.println("--------------------------------------------");
         return;

      }

      System.out.println("------Log Report of Study Tracker---------.");

      for (StudyLog s : Database)
      {
         System.out.println(s);
      }

      System.out.println("--------------------------------------------");


    }

    public void ExportToCSV()
    {

    }
    public void SummaryByDate()
    {
        
    }
    public void SummaryBySubject()
    {
        
    }


}

class program860
{
          public static void main(String[] args)
   {
      int iChoice = 0;
      StudyTracker stobj = new StudyTracker();
      Scanner sobj = new Scanner(System.in);
      
      System.out.println("--------------------------------------------");
      System.out.println("-----Welcome to Marvellous Study tracker----");
      System.out.println("--------------------------------------------");
      
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
         
         switch (iChoice) {
            case 1:           //Insert new log
               stobj.InsertLog();
               break;

            case 2:           //View all study logs
               stobj.DisplayLog();
               break;
            
            case 3:           //Export to CSV
               stobj.ExportToCSV();
               break;

            case 4:           //Summary by Date
               stobj.SummaryByDate();
               break;

            case 5:           //Summary by subject
               stobj.SummaryBySubject();
               break;
         
            case 6:           //Terminate the project
               break;
               default:
               System.out.println("Please enter valid option");
               break;
         }
      }
      while(iChoice != 6);

      System.out.println("--------------------------------------------");
      System.out.println("------Thankyou for using Stydy Tracker------");
      System.out.println("--------------------------------------------");
   }        //End of main
}           //End of class
  
  
