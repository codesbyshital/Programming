///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  MergeFiles
// Description:    Assignment_47 Q.5 :Write java program to accept directory name from user and write data
//                                    of all files along with its name & size of each file into one newly created file
//                                    named as “Marvellous.txt”.
// Input : 
// Output: 
// Date:            7/08/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.io.*;
import java.util.Scanner;

class Q4_Assignment47
{
     // Function to copy data of all files into Marvellous.txt
    public static void MergeFiles(String DirName)
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
                    if(f.isFile() && !f.getName().equals("Marvellous.txt"))
                    {
                         // Write File Information
                        fw.write("====================================================\n");
                        fw.write("File Name : " + f.getName() + "\n");
                        fw.write("File Size : " + f.length() + " Bytes\n");
                        fw.write("====================================================\n");

                        FileReader fr = new FileReader(f);

                        int i = 0;
                        while((i = fr.read()) != -1)
                        {
                            fw.write(i);
                        }

                        fw.write("\n\n");

                        fr.close();
                    }
                }

                fw.close();

                System.out.println("Data copied successfully into Marvellous.txt");
            }
            catch(Exception e)
            {
                System.out.println("Error : " + e);
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

        MergeFiles(Directory);

        sobj.close();
    
    }

}
