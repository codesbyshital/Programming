///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  strUpperX
// Description:     Assignment_32: Q.2 :Write a program which accept string from user and convert it into Upper case.
//                                      
// Input : "Marvellous Multi OS"
// Output:  MARVELLOUS MULTI OS
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public String strUpperX(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
            {  
                if(Arr[i] >= 'a' && Arr[i] <= 'z')   // checks if letter is capital
                {
                    Arr[i] = (char)(Arr[i] - 32);
                }                      
            }
        
        return new String(Arr);         
    }   
    
}

class Q2_Assignment32
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;
       
        StringX strobj = new StringX();
        String sRet = null;
    
        System.out.println("Enter the String :");
        Arr = sobj.nextLine();
        
        sRet = strobj.strUpperX(Arr);
        System.out.println("Modified String is: "+sRet);

    }
}