/*
    Project :    Study Tracker : 
    java collections:
    ArrayList : to store info of students ( inbuilt linked list of java)   : its generic 
    String elemnets
*/ 

import java.time.LocalDateTime;


class StudyLog   // user defined class
{
    public String Subject;
    public double Duration;

    public StudyLog(String a, double d)
    {
        this.Subject = a;
        this.Duration = d;
    }

}

class program839
{
    public static void main(String A[])             
    {
        StudyLog sobj1 = new StudyLog("C", 2.5 );
        StudyLog sobj2 = new StudyLog("Java", 4.5 );

        System.out.println(sobj1);   // object addrress
        System.out.println(sobj2);

        LocalDateTime lobj = LocalDateTime.now();
        System.out.println("Local data Time :"+lobj);


    }
}