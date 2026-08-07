///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateChecksum
// Description:    Assignment_46 Q.4 :Write java program to accept file name from user calculate checksum of
//                                    that file and display on screen.
// Input : 
// Output: 
// Date:            7/08/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class Q4_Assignment46
{
    //function to calculate checksum 
    public static int CalculateChecksum(String FileName)
    {
        int Checksum = 0;

        try
        {
            FileInputStream fin = new FileInputStream(FileName);

            int i = 0;

            while((i = fin.read()) != -1)
            {
                Checksum = Checksum + i;
            }

            fin.close();
        }
        catch(FileNotFoundException obj)
        {
            System.out.println("File not found.");
        }
        catch(IOException obj)
        {
            System.out.println("Unable to read file.");
        }

        return Checksum;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String Name = sobj.nextLine();

        int Ret = CalculateChecksum(Name);

        System.out.println("Checksum of file is : " + Ret);

        sobj.close();
    }

}
