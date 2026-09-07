/*
    Project :    Study Tracker : 
    java collections:
    ArrayList : to store info of students ( inbuilt linked list of java)   : its generic 
    String elemnets

    // getter setter methods
*/ 

import java.time.LocalDate;


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

class program845
{
    public static void main(String A[])             
    {
        LocalDate lobj = LocalDate.now();        // gives Date only

        StudyLog sobj1 = new StudyLog(lobj,"C Programming" , 3.5, "Learn Pointers in C");

        System.out.println(sobj1.Duration);          //  Error : due to Private member

        // calling getter methods
        System.out.println(sobj1.getDate());        
        System.out.println(sobj1.getSubject());
        System.out.println(sobj1.getDuration());
        System.out.println(sobj1.getDescription());

    }
}