///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  StrCatX
// Description:     Assignment_34: Q.5 :Write a program which accept 2 string from user and concat second string after   
//                                      first string.(Implement strcat function)
// Input : "Marvellous"
//         "Infosystems"
// Output: "Marvellous Infosystems"  
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public String StrCatX(String str1, String str2)
    {
        char src1[] = str1.toCharArray(); 
        char src2[] = str2.toCharArray();  
        
        char dest[] = new char[src1.length + src2.length];

        int i = 0, j = 0;                          

        for(i = 0; i < src1.length; i++)
            {                  
                dest[i] = src1[i];                                      
            }
            

        for(j = 0; j < src2.length; j++)
            {                                  
                dest[i] = src2[j];    
                i++;                                  
            }
       
        return new String(dest);         
    }   
    
}

class Q5_Assignment34
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;  
        String Brr = null;  
       
        StringX strobj = new StringX();
            
        System.out.println("Enter first String :");
        Arr = sobj.nextLine();

        System.out.println("Enter second String :");
        Brr = sobj.nextLine();
        
        String sRet = strobj.StrCatX(Arr,Brr);
       
        System.out.println("Concatenated String is: "+sRet); 
        
        sobj.close();

    }
}