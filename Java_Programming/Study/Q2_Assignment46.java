///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CheckFile
// Description:     Assignment_46 Q.2 :Write java program to accept file name from user and check whether
//                                     that file is regular file or not..
// Input : 
// Output: 
// Date:            7/08/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class Q1_Assignment46
{
    //function to check for regular file
    public static boolean CheckFile(String FileName)
    {
        File fobj = new File(FileName);

        if(fobj.exists() && fobj.isFile())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String Name = sobj.nextLine();

        boolean Ret = CheckFile(Name);

        if(Ret == true)
        {
            System.out.println("It is a regular file.");
        }
        else
        {
            System.out.println("It is not a regular file.");
        }

        sobj.close();
    }

}
