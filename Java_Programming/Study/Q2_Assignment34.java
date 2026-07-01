///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrCpyX
// Description:     Assignment_34: Q.2 :Write a program which accept string from user and copy content of that string 
//                                      into another String till the size mentioned .(Implement strcpy() function)
//                                      Note: If third parameter > siz of source string then copy whole string into dest.
// Input : "Marvellous Multi OS"
//          10
// Output: "Marvellous"   in another string
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public String StrCpyX(String str, int iCnt)
    {
        char src[] = str.toCharArray(); 
        char dest[] = new char[iCnt];   
        int i = 0;                          

        for(i = 0; i < src.length && iCnt != 0; i++, iCnt--)
            {  
                dest[i] = src[i];
                                      
            }
       
        return new String(dest);         
    }   
    
}

class Q2_Assignment34
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;    
       
        StringX strobj = new StringX();
            
        System.out.println("Enter the String :");
        Arr = sobj.nextLine();

        System.out.println("Enter the size for destination string :");
        int iSize = sobj.nextInt();
        
        String sRet = strobj.StrCpyX(Arr,iSize);
        System.out.println("Original String is: "+Arr);
        System.out.println("Copied String is: "+sRet); 
        
        sobj.close();

    }
}