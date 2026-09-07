/*
    Project :    Study Tracker : 
    java collections:
    arraylist : to store info of students ( inbuilt linked list of java)
    
*/ 

import java.util.ArrayList;
import java.util.Scanner;


class program833
{
    public static void main(String A[])             
    {
        ArrayList <Integer> aobj = new ArrayList <Integer> ();    // wrapper class

        aobj.add(11);
        aobj.add(21);
        aobj.add(51);
        aobj.add(101);
        aobj.add(51);           // preserve duplicate data as well

        for(int i = 0; i < aobj.size(); i++)   // iterate like array
        {
            System.out.println(aobj.get(i));
        }
        

    }
}