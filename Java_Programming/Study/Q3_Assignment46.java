///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CreateDirectory
// Description:    Assignment_46 Q.3 :Write java program to accept directory name from user and create that directory.
// Input : 
// Output: 
// Date:            7/08/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class Q3_Assignment46
{
    //function to create directory
    public static void CreateDirectory(String DirName)
    {
        File fobj = new File(DirName);

        if(fobj.exists())
        {
            System.out.println("Directory already exists.");
        }
        else
        {
            if(fobj.mkdir())
            {
                System.out.println("Directory created successfully.");
            }
            else
            {
                System.out.println("Unable to create directory.");
            }
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String DirName = sobj.nextLine();

        CreateDirectory(DirName);

        sobj.close();
    }

}
