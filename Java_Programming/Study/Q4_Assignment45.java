///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  
// Description:     Assignment_45 Q.4 :Write java program to accept file name from user and create new file of
//                                     that name if it is not existing.
// Input : 
// Output: 
// Date:            7/08/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

class Q4_Assignment45
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file Name : ");
        String FileName = sobj.nextLine();

         try
        {
            File fobj = new File(FileName);

            if(fobj.createNewFile())
            {
                System.out.println("File created successfully.");
            }
            else
            {
                System.out.println("File already exists.");
            }

            sobj.close();
        }
        catch(IOException obj)
        {
            System.out.println("Unable to create file.");
        }
    }
}
