/*
    Project :    Study Tracker : 
    java collections:
    ArrayList : to store info of students ( inbuilt linked list of java)   : its generic 
    String elemnets
*/ 

import java.util.ArrayList;


class program836
{
    public static void main(String A[])             
    {
        ArrayList <String> aobj = new ArrayList <String> ();    // wrapper class

        aobj.add("Pune");
        aobj.add("Mumbai");
        aobj.add("Satara");
        aobj.add("Nashik");
        aobj.add("Mumbai");           // preserve duplicate data as well

        aobj.remove(4);    // index

        for(String str : aobj)   // iterate like for each
        {
            System.out.println(str);
        }
        
        aobj.clear();  // clears all data of arraylist

        System.out.println(aobj);


    }
}