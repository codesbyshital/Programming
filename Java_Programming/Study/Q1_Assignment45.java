///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  
// Description:     Assignment_45 Q.1 :Write java program to accept file name from user and open that file.
// Input : 
// Output: 
// Date:            7/08/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;

class Q1_Assignment45
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file Name : ");
        String FileName = sobj.nextLine();

        try
        {
            FileInputStream fobj = new FileInputStream(FileName);

            System.out.println("File opened successfully.");

            fobj.close();
        }
        catch(FileNotFoundException obj)
        {
            System.out.println("Unable to open file.");
        }
        catch(IOException obj)
        {
            System.out.println("Error while closing file.");
        }

        sobj.close();
    }
}
