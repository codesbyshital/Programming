///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayDigit
// Description:     Assignment_32: Q.4 :Write a program which accept string from user and Display only Digits from
//                                       that string.
// Input : "marve89llous121"
// Output:  89121
// Input : "Demo"
// Output:  
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public String DisplayDigit(String str)
    {
        int i = 0;
        String result = "";

        char Arr[] = str.toCharArray();
       

        for(i = 0; i < Arr.length; i++)
            {  
                if(Arr[i] >= '0' && Arr[i] <= '9')     // checks if letter is digit
                {
                    result = result + Arr[i];
                }                               
                                     
            }
        
        return result;         
    }   
    
}

class Q4_Assignment32
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;
       
        StringX strobj = new StringX();
        String sRet = null;
    
        System.out.println("Enter the String :");
        Arr = sobj.nextLine();
        
        sRet = strobj.DisplayDigit(Arr);
        System.out.println("Modified String is: "+sRet);

    }
}