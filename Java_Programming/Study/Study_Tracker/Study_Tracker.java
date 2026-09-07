///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Project Title : Study Tracker
// Description: This application is used for maintaining and analyzing personal study activities. 
//              It demonstrates important Java programming concepts such as classes, objects, encapsulation, 
//              constructors, collections, file handling, exception handling, and date handling.
//              The use of ArrayList allows multiple study records to be maintained, while TreeMap provides 
//              an efficient way to generate date-wise and subject-wise summaries. 
//              The CSV export feature allows the user to preserve and use study information outside the application. 
//             
// Date:            21/08/2026
// Author:          Shital Ajit Nikam   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////
//
//  Header Files Inclusion
//
//////////////////////////////////////////////////////

import java.io.*;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.TreeMap;

import javax.lang.model.util.ElementScanner14;
import javax.xml.crypto.Data;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class :       StudyLog
//  Decription :  Represents a single study log entry. 
//                This class stores the date, subject, duration and description of one study session.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

class StudyLog  
{
   private LocalDate Date;           // Date on which the study session was performed
   private String Subject;           // Name of the subject studied
   private double Duration;          // Duration of the study session in hours
   private String Description;       // Description of the study activity

   //Constructor to initialize a StudyLog object.
   public StudyLog(LocalDate a, String b, double c, String d)
   {
      this.Date = a;
      this.Subject = b;
      this.Duration = c;
      this.Description = d;
   } 
   
   //Returns the study log information in string format. return String containing date, subject, duration and description   
   public String toString()
   {
      return Date + " | " + Subject + " | " + Duration + " | " + Description;
   }

   //Returns the date of the study session.
   public LocalDate getDate()
   {
      return this.Date;
   }

   //Returns the subject studied during the session.
   public String getSubject()
   {
      return this.Subject;
   }

   //Returns the duration of the study session.
   public double getDuration()
   {
      return this.Duration;
   }

   //Returns the description of the study activity.
   public String getDescription()
   {
      return this.Description;
   }
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class :       StudyTracker
//  Decription :  Manages the collection of study logs and provides various operations 
//                such as inserting, displaying, exporting and generating study summaries.
//
/////////////////////////////////////////////////////////////////////////////////////////////

class StudyTracker
{
   // ArrayList used to store all StudyLog objects
   public ArrayList <StudyLog>Database;

   // Constructor of StudyTracker. Initializes the ArrayList used as the study database.
   public StudyTracker()
   {
      Database = new ArrayList<StudyLog>();
   }

   /* 
      Accepts study details from the user and creates a new StudyLog object.  
      The current date is automatically taken using LocalDate.now().
      The newly created StudyLog object is then added to Database.   
   */
   public void InsertLog()
   {
      Scanner sobj = new Scanner(System.in);
      System.out.println("------------------------------------------------------");
      System.out.println("-------Enter the details of your study----------------");
      System.out.println("------------------------------------------------------");

      // Get the current date
      LocalDate lobj = LocalDate.now();

      System.out.println("We are entering the entering the date as : "+lobj);

       // Accept subject name
      System.out.println("Enter the name of Subject like C/C++/Java etc : ");
      String sub = sobj.nextLine();
      
       // Accept study description
      System.out.println("Provide the description of your study : ");
      String desc = sobj.nextLine();
      
      // Accept study duration
      System.out.println("Enter the time period of your study : ");
      double dur = sobj.nextDouble();

      // Create StudyLog object
      StudyLog studyobj = new StudyLog(lobj, sub, dur, desc);

       // Add study log object into database
      Database.add(studyobj);

      System.out.println("Study log is inserted successfully");
   }

   /* 
      Displays all study logs currently stored in the database. 
      If the database is empty, an appropriate message is displayed.
   */
   public void DisplayLog()
   {
      System.out.println("----------------------------------------------------------");

         // Database is empty....
      if(Database.isEmpty())
      {
         System.out.println("Nothing to Display as Database is Empty.");
         System.out.println("-----------------------------------------------------------");
         return;

      }

      System.out.println("------Log Report of Study Tracker---------------------.");

      // Traverse and display all study log objects
      for (StudyLog s : Database)
      {
         System.out.println(s);
      }

      System.out.println("------------------------------------------------------------");

   }


   /* 
      Exports all study logs into a CSV file.
      The user provides the CSV filename. The method writes the header followed by all study log records. 
      FileWriter is used for file handling and try-with-resources is used to automatically close the file.
   */
   public void ExportToCSV()
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the name that you want to create for CSV file");
      String FileName = sobj.nextLine();

      System.out.println("----------------------------------------------------");

         // Check whether database is empty
      if(Database.isEmpty())
      {
         System.out.println("Nothing to Export- Database is Empty.");
         System.out.println("-----------------------------------------------------");
         return;

      }

      try(FileWriter fwobj = new FileWriter(FileName))
      {
         // Write CSV header
         fwobj.write("Date,Subject,Duration of Study,Description of Study\n");

          // Write all study records into CSV file
         for(StudyLog s : Database)
         {
            fwobj.write(s.getDate()+" "+
            s.getSubject()+","+
            s.getDuration()+","+
            s.getDescription()+"\n");
         }

         System.out.println("Data gets exported to CSV successfully...");

         System.out.println("-----------------------------------------------------");


      }
      catch(IOException iobj)     // Handle file-related exceptions
      {
         System.out.println(iobj);
      }

      catch(Exception eobj)         // Handle any other unexpected exceptions
      {
         System.out.println(eobj);

      }

   }

   /* 
      Calculates and displays the total study duration for each date.
      A TreeMap is used where:
      Key   = Date
      Value = Total study duration for that date
   */
   public void SummaryByDate()   // datewise total study hours 
   {
      System.out.println("-----------------------------------------------------");
      System.out.println("-----Summary by Date from study tracker--------------");
      System.out.println("-----------------------------------------------------");

       // TreeMap stores date-wise total study duration
      TreeMap <LocalDate, Double> tobj = new TreeMap<LocalDate, Double>();

      LocalDate lobj = null;

      double d = 0.0;
      double old = 0.0;

      // Traverse all study logs
      for(StudyLog s : Database)
      {
         lobj = s.getDate();
         d = s.getDuration();

          // If date already exists, add duration
         if(tobj.containsKey(lobj))
         {
            old = tobj.get(lobj);
            tobj.put(lobj,d+old);
         }
         else
         {
            // Add date for the first time
            tobj.put(lobj,d);
         }
      } // end of for

      // Display date-wise total study duration

      for(LocalDate l : tobj.keySet())    // get keys of local date
      {
         System.out.println("Date : "+l+" Total Study Duration : "+tobj.get(l));    
      }

      System.out.println("---------------------------------------------------------------");
        
   }

   /* 
      Calculates and displays the total study duration for each Subject.
      A TreeMap is used where:
      Key   = Subject
      Value = Total study duration for that subject.
   */
    public void SummaryBySubject()
    {
      System.out.println("----------------------------------------------------");
      System.out.println("-----Summary by Subject from study tracker----------");
      System.out.println("----------------------------------------------------");

      // TreeMap stores subject-wise total study duration
      TreeMap <String, Double> tobj = new TreeMap<String, Double>();

      String sobj = null;

      double d = 0.0;
      double old = 0.0;

        // Traverse all study logs
      for(StudyLog s : Database)
      {
         sobj = s.getSubject();
         d = s.getDuration();

         // If subject already exists, add duration
         if(tobj.containsKey(sobj))
         {
            old = tobj.get(sobj);
            tobj.put(sobj,d+old);
         }
         else
         {
            // Add subject for the first time
            tobj.put(sobj,d);
         }
      } // end of for


     // Display subject-wise total study duration
      for(String str : tobj.keySet())    // get keys of local date
      {
         System.out.println("Subject : "+str+" Total Study Duration : "+tobj.get(str));    
      }

      System.out.println("-----------------------------------------------------------------");
              
    }

}

class Study_Tracker
{
          public static void main(String[] args)
   {
      int iChoice = 0;
      StudyTracker stobj = new StudyTracker();
      Scanner sobj = new Scanner(System.in);
      
      System.out.println("------------------------------------------------");
      System.out.println("-----Welcome to Study Tracker Application-------");
      System.out.println("------------------------------------------------");
      
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

      System.out.println("--------------------------------------------------------");
      System.out.println("------Thankyou for using Stydy Tracker Application------");
      System.out.println("--------------------------------------------------------");
      
   }        //End of main

}           //End of class
  
  
