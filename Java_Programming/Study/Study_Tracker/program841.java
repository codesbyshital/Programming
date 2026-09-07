/*
    Project :    Study Tracker : 
    java collections:
    ArrayList : to store info of students ( inbuilt linked list of java)   : its generic 
    String elemnets
*/ 

import java.time.LocalDate;


class StudyLog   // user defined class
{
    public LocalDate Date;
    public String Subject;
    public double Duration;
    public String Description;

    public StudyLog(LocalDate a, String b, double c, String d)
    {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;
    }

}

class program841
{
    public static void main(String A[])             
    {
        LocalDate lobj = LocalDate.now();        // gives Date only

        StudyLog sobj1 = new StudyLog(lobj,"C Programming" , 3.5, "Learn Pointers in C");
        StudyLog sobj2 = new StudyLog(lobj,"Java Programming" , 5.5, "Learn Inheritance in Java");

        System.out.println(sobj1);   // printing # address
        System.out.println(sobj2);



    }
}