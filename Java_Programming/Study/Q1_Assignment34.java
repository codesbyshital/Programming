///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrCpyX
// Description:     Assignment_34: Q.1 :Write a program which accept string from user and copy content of that string 
//                                      into another String.(Implement strcpy() function)
// Input : "Marvellous"
// Output: "Marvellous"   in another string
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public String StrCpyX(String str)
    {
        char src[] = str.toCharArray(); 
        char dest[] = new char[src.length];                             

        for(int i = 0; i < src.length; i++)
            {  
                dest[i] = src[i];
                                      
            }
       
        return new String(dest);         
    }   
    
}

class Q1_Assignment34
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;    
       
        StringX strobj = new StringX();
            
        System.out.println("Enter the String :");
        Arr = sobj.nextLine();
        
        String sRet = strobj.StrCpyX(Arr);
        System.out.println("Original String is: "+Arr);
        System.out.println("Copied String is: "+sRet); 
        
        sobj.close();

    }
}