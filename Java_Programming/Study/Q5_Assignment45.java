///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  
// Description:     Assignment_45 Q.5 :Write java program to accept directory name from user and display all
//                                     names of files from that directory.
// Input : 
// Output: 
// Date:            7/08/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.File;
import java.util.Scanner;

class Q5_Assignment45
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            File Arr[] = fobj.listFiles();

            System.out.println("\nFiles in the directory are:\n");

            for(File temp : Arr)
            {
                if(temp.isFile())
                {
                    System.out.println(temp.getName());
                }
            }
        }
        else
        {
            System.out.println("Directory does not exist.");
        }

        sobj.close();

    }
}
