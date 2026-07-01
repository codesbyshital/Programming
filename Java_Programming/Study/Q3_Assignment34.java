///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrCpyCapitalX
// Description:     Assignment_34: Q.3 :Write a program which accept string from user and copy capital characters of  
//                                      that string into another String.
// Input : "Marvellous Multi OS"
// Output: "MMOS"  
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public String StrCpyCapitalX(String str)
    {
        char src[] = str.toCharArray(); 
        char dest[] = new char[src.length];   
        int i = 0;                          

        for(i = 0; i < src.length; i++)
            {  
                if(src[i] >= 'A' && src[i] <= 'Z')
                dest[i] = src[i];
                                      
            }
       
        return new String(dest);         
    }   
    
}

class Q3_Assignment34
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;    
       
        StringX strobj = new StringX();
            
        System.out.println("Enter the String :");
        Arr = sobj.nextLine();
        
        String sRet = strobj.StrCpyCapitalX(Arr);
        System.out.println("Original String is: "+Arr);
        System.out.println("Copied String is: "+sRet); 
        
        sobj.close();

    }
}