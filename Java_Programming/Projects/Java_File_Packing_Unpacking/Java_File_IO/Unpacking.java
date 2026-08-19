import java.io.*;

class Unpacking
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

   private static final String KEY = "ABC";

   public static void XORDecryption(byte Buffer[], int Size, String Key)
    {
        for(int i = 0; i < Size; i++)
        {
            Buffer[i] = (byte)(Buffer[i] ^ Key.charAt(i % Key.length()));
        }
    }

   public void unpack(String PackFileName)
   {
      File fpackobj = null;
      FileInputStream fiobj = null;
      FileOutputStream foobj = null;
      byte Header[] = new byte[100];
      byte Buffer[] = null;
      
      fpackobj = new File(PackFileName);

      if(fpackobj.exists() && CheckFileExtension(PackFileName))
      {
         try
         {
            fiobj = new FileInputStream(fpackobj);

            // Read header
            while((fiobj.read(Header, 0, 100)) != -1)
            {
               String strHeader = new String(Header);

               strHeader = strHeader.trim();
               strHeader = strHeader.replaceAll("\\s+", " ");

               String Tokens[] = strHeader.split("@");

               System.out.println("File name : "+Tokens[0]);
               System.out.println("File size : "+Tokens[1]);

               File NewFile = new File(Tokens[0]);
               
               NewFile.createNewFile();

               foobj = new FileOutputStream(NewFile);
               int data = Integer.parseInt(Tokens[1]);
               Buffer = new byte[data];

               // read data
               fiobj.read(Buffer, 0, Integer.parseInt(Tokens[1]));

               //Decryption
               XORDecryption(Buffer, Integer.parseInt(Tokens[1]), KEY);
               
               // Write the data
               foobj.write(Buffer, 0, Integer.parseInt(Tokens[1]));

            }// End of while
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
         System.out.println("There is no such pack file");
      }  
   }
}
