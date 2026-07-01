///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  strRevX
// Description:     Assignment_33: Q.5 :Write a program which accept string from user and reverse that string in place.
//                                       
// Input : "abcd"
// Output:  dcba
// Input : abba
// Output:  abba
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public String strRevX(String str)
    {
        char Arr[] = str.toCharArray(); 
        int start = 0;
        int end = Arr.length - 1;   
        char Temp;   
                      

        for(start = 0, end = Arr.length-1; start < end ; start++, end--)
            {  
                Temp = Arr[start];
                Arr[start] = Arr[end];
                Arr[end] = Temp;        
            }
       
        return new String(Arr);         
    }   
    
}

class Q5_Assignment33
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;
       
        StringX strobj = new StringX();
            
        System.out.println("Enter the String :");
        Arr = sobj.nextLine();
        
        String sRet = strobj.strRevX(Arr);
        System.out.println("Reverse String is: "+sRet);     
        
        sobj.close();

    }
}