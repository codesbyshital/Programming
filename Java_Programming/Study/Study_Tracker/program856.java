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

import java.time.LocalDate;
import java.util.Scanner;



class program856
{
    public static void main(String A[])             
    {
        LocalDate lobj = LocalDate.now();        // gives Date only
        Scanner sobj = new Scanner(System.in);

        // shell to interact with user
        do
        {

            System.out.println("------------------------------------------------------------------- ");
            System.out.println("Please select  ");
            System.out.println("1. Insert new study log");
            System.out.println("2. view all study log to CSV");
            System.out.println("3. Export study log to CSV");
            System.out.println("4. Summary of study log by date");
            System.out.println("5. Summary of study log by Subject");

            System.out.println("6. Exit applicarion.");

            iChoice = sobj.nextInt();

        }    
                
    }
}