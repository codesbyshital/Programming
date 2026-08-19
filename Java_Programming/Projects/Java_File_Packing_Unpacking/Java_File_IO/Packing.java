////////////////////////////////////////////////////////////////
//
// Application Name : Advanced File Packer
// Description      : Combines multiple files from a folder into 
//                    a single packed file with 100-byte headers.
//
////////////////////////////////////////////////////////////////

import java.io.*;

class Packing
{
    public static boolean CheckFileExtension(String FileName)
    {
        if(FileName == null)
        {
                return false;
        }

        FileName = FileName.toLowerCase();

        String Extensions[] = 
        {
                ".txt",
                ".c",
                ".cpp",
                ".py",
                ".java"
        };

        for(String Extension : Extensions)
        {
            if(FileName.endsWith(Extension))
            {
                return true;
            }
        }
        return false;
    }
    public static void XOREncryption(byte Buffer[], int Size, String key2)
    {
        byte keyBytes[] = key2.getBytes();
        for(int i = 0; i < Size; i++)
        {
            Buffer[i] = (byte)(Buffer[i] ^ keyBytes[i % keyBytes.length]);
        }
    }

    private static final String KEY = "ABC";
    
    public void pack(String FolderName, String PackFileName)
    {   
        byte Buffer[] = new byte[1024];
        int iRet = 0;
        int i = 0;
        int packedCount = 0;
        
        File fobjfolder = new File(FolderName);

        // Check if the directory exists
        if(fobjfolder.exists() && fobjfolder.isDirectory())
        {
            System.out.println("\n[INFO] Folder exists. Scanning files...");

            // Filter out directories to only pack regular files
            File fArr[] = fobjfolder.listFiles();

            if(fArr == null || fArr.length == 0)
            {
                System.out.println("[WARNING] No files found in the folder to pack.");
                return;
            }

            System.out.println("[INFO] Number of files to pack : " + fArr.length);

            File fobjpack = new File(PackFileName);

            if(!CheckFileExtension(PackFileName))
            {
                System.out.println("[WARNING] Invalid packed file extension. Use correct extension");
                return;
            }

            // Using try-with-resources to automatically close file streams safely
            try
            {
                FileOutputStream foobj = new FileOutputStream(fobjpack);

                for(i = 0; i < fArr.length; i++)
                {
                    if(fArr[i].isFile() && CheckFileExtension(fArr[i].getName()))
                    {
                        // 1. Build 100-byte header format: "FileName FileSize [spaces]"
                        String header = fArr[i].getName() + "@" + fArr[i].length();
                        
                        // Pad header with spaces until its length is exactly 100
                        StringBuilder sbHeader = new StringBuilder(header);
                        while(sbHeader.length() < 100)
                        {
                            sbHeader.append(" ");
                        }
                        
                        // 2. Write 100-byte header to packed file
                        foobj.write(sbHeader.toString().getBytes());

                        // 3. Read content from source file & write into packed file
                        FileInputStream fiobj = new FileInputStream(fArr[i]);
                    
                        while((iRet = fiobj.read(Buffer)) != -1)
                        {
                            XOREncryption(Buffer, iRet, KEY);

                            foobj.write(Buffer, 0, iRet); 
                        }
                    
                        packedCount++;
                        System.out.println("  --> Successfully packed : " + fArr[i].getName());
                        fiobj.close();
                    }
                }

                System.out.println("\n[SUCCESS] Packing completed successfully!");
                System.out.println("[INFO] Total files packed: " + packedCount);
                foobj.close();
            }
            catch(Exception e)
            {
                System.out.println("[ERROR] Exception occurred during packing: " + e.getMessage());
                e.printStackTrace();
            }
        }
        else
        {
            System.out.println("[ERROR] There is no such folder: " + FolderName);
        }
    }
    // public static void main(String[] args) 
    // {
    //     pack("Data", "Marvellous.txt");
    // }
}