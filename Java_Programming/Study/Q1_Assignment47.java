///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayRegularFiles
// Description:    Assignment_47 Q.1 :Write java program to accept directory name from user and display all
//                                    names of files from that directory which are regular file.
// Input : 
// Output: 
// Date:            7/08/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class Q1_Assignment47
{
    //function to Display regular files from directory 
    public static void DisplayRegularFiles(String DirName)
    {
        File fobj = new File(DirName);

        if(fobj.exists() == false)
        {
            System.out.println("Directory does not exist.");
            return;
        }

        if(fobj.isDirectory() == false)
        {
            System.out.println("Entered path is not a directory.");
            return;
        }

        File Arr[] = fobj.listFiles();

        System.out.println("\nRegular files are:\n");

        for(File temp : Arr)
        {
            if(temp.isFile())
            {
                System.out.println(temp.getName());
            }
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String DirName = sobj.nextLine();

        DisplayRegularFiles(DirName);

        sobj.close();
    
    }

}
