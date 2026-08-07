///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  WriteFileNames
// Description:    Assignment_47 Q.2 :Write java program to accept directory name from user and write names
//                                    of all files from that directory into one newly created file named as
//                                    “Marvellous.txt”.
// Input : 
// Output: 
// Date:            7/08/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class Q2_Assignment47
{
    //function to write names of all files from directory into one newly created file 
   
   public static void WriteFileNames(String DirName)
    {
        File dir = new File(DirName);

        if(dir.exists() && dir.isDirectory())
        {
            try
            {
                File output = new File(dir, "Marvellous.txt");

                FileWriter fw = new FileWriter(output);

                File arr[] = dir.listFiles();

                for(File f : arr)
                {
                    if(f.isFile())
                    {
                        fw.write(f.getName());
                        fw.write("\n");
                    }
                }

                fw.close();

                System.out.println("File created successfully...");
                System.out.println("Location : " + output.getAbsolutePath());
            }
            catch(Exception e)
            {
                System.out.println("Unable to write file : " + e);
            }
        }
        else
        {
            System.out.println("Invalid Directory");
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Directory Name : ");
        String Directory = sobj.nextLine();

        WriteFileNames(Directory);

        sobj.close();
    
    }

}
