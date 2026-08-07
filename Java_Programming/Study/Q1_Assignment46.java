///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CopyFile
// Description:     Assignment_46 Q.1 :Write java program to accept two file names from user and open first
//                                     file and create new file (Second name) and copy the data from first file into
//                                     newly created file.
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

    // Function to copy contents of one file to another
    public static void CopyFile(String Src, String Dest)
    {
        try
        {
            FileInputStream fin = new FileInputStream(Src);
            FileOutputStream fout = new FileOutputStream(Dest);

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            while((iRet = fin.read(Buffer)) != -1)
            {
                fout.write(Buffer, 0, iRet);
            }

            fin.close();
            fout.close();

            System.out.println("File copied successfully.");
        }
        catch(FileNotFoundException obj)
        {
            System.out.println("Source file not found.");
        }
        catch(IOException obj)
        {
            System.out.println("Unable to copy file.");
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter source file name : ");
        String Source = sobj.nextLine();

        System.out.print("Enter destination file name : ");
        String Destination = sobj.nextLine();

        CopyFile(Source, Destination);

        sobj.close();
    }
}
