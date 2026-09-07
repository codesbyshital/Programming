/*
    Project :    Study Tracker : 
    java collections:
    ArrayList : to store info of students ( inbuilt linked list of java)
    
*/ 

import java.util.ArrayList;


class program834
{
    public static void main(String A[])             
    {
        ArrayList <Integer> aobj = new ArrayList <Integer> ();    // wrapper class

        aobj.add(11);
        aobj.add(21);
        aobj.add(51);
        aobj.add(101);
        aobj.add(51);           // preserve duplicate data as well

        aobj.remove(4);    // index

        for(int no : aobj)   // iterate like for each
        {
            System.out.println(no);
        }
        
        aobj.clear();  // clears all data of arraylist

        System.out.println(aobj);


    }
}