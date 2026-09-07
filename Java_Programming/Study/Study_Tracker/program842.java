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

    /*
    class Object
    {
    public String toString()
    {    }

    }
    
    */
    public StudyLog(LocalDate a, String b, double c, String d)
    {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;
    }

    public String toString()    // overriding method from Object class
    {
        return "Inside ToString";
    }

}

class program842
{
    public static void main(String A[])             
    {
        LocalDate lobj = LocalDate.now();        // gives Date only

        StudyLog sobj1 = new StudyLog(lobj,"C Programming" , 3.5, "Learn Pointers in C");
        StudyLog sobj2 = new StudyLog(lobj,"Java Programming" , 5.5, "Learn Inheritance in Java");

        System.out.println(sobj1);          //  System.out.println(sobj1.toString())
        System.out.println(sobj2);



    }
}