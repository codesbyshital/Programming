/*
    Project :    Study Tracker : 
    java collections:
    ArrayList : to store info of students ( inbuilt linked list of java)   : its generic 
    String elemnets

    // getter setter methods
*/ 

import java.time.LocalDate;
import java.util.ArrayList;


class StudyLog   // user defined class
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

    @Override       // decorator for overriding
    public String toString()    // overriding method from Object class
    {
        return Date+" | "+Subject+" | "+Duration+" | "+Description;
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

class program848
{
    public static void main(String A[])             
    {
        LocalDate lobj = LocalDate.now();        // gives Date only

        ArrayList <StudyLog>Database = new ArrayList<StudyLog>();    // arraylist of  object userdefined class

        StudyLog sobj1 = new StudyLog(lobj,"C Programming" , 3.5, "Pointers in C");
        StudyLog sobj2 = new StudyLog(lobj,"C++ Programming" , 3.5, "Pointers in C++");
        StudyLog sobj3 = new StudyLog(lobj,"Java Programming" , 3.5, "Inheritance in java");

        Database.add(sobj1);
        Database.add(sobj2);
        Database.add(sobj3);

        for(StudyLog sobj : Database)
        {
            System.out.println(sobj);
        }
        
    }
}