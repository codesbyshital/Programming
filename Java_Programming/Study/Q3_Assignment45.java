///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  
// Description:     Assignment_45 Q.3 :Write java program to accept file name from user and open that file in
//                                     write mode and write some data at the end of file.
// Input : 
// Output: 
// Date:            7/08/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

class Q3_Assignment45
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file Name : ");
        String FileName = sobj.nextLine();

        System.out.print("Enter data to append : ");
        String Data = sobj.nextLine();
        
        try
        {
            // Open file in append mode
            FileOutputStream fout = new FileOutputStream(FileName, true);

            byte Arr[] = Data.getBytes();

            fout.write(Arr);

            fout.close();
            sobj.close();

            System.out.println("Data appended successfully.");
        }
        catch(FileNotFoundException obj)
        {
            System.out.println("File not found.");
        }
        catch(IOException obj)
        {
            System.out.println("Unable to write into file.");
        }
    }
}
