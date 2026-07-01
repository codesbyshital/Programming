///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrCpySmallX
// Description:     Assignment_34: Q.4 :Write a program which accept string from user and copy small characters of  
//                                      that string into another String.
// Input : "Marvellous Multi OS"
// Output: "arvellous ulti"  
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public String StrCpySmallX(String str)
    {
        char src[] = str.toCharArray(); 
        char dest[] = new char[src.length];   
        int i = 0;                          

        for(i = 0; i < src.length; i++)
            {  
                if((src[i] >= 'a' && src[i] <= 'z') || src[i] == ' ')
                dest[i] = src[i];
                                      
            }
       
        return new String(dest);         
    }   
    
}

class Q4_Assignment34
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;    
       
        StringX strobj = new StringX();
            
        System.out.println("Enter the String :");
        Arr = sobj.nextLine();
        
        String sRet = strobj.StrCpySmallX(Arr);
        System.out.println("Original String is: "+Arr);
        System.out.println("Copied String is: "+sRet); 
        
        sobj.close();

    }
}