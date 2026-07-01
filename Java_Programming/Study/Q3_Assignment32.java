///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  strToggleX
// Description:     Assignment_32: Q.3 :Write a program which accept string from user and toggle the case.
//                                      
// Input : "Marvellous Multi OS"
// Output:  mARVELLOUS mULTI os
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public String strToggleX(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
            {  
                if(Arr[i] >= 'A' && Arr[i] <= 'Z')   // checks if letter is capital
                {
                    Arr[i] = (char)(Arr[i] + 32);
                } 
                else if(Arr[i] >= 'a' && Arr[i] <= 'z')   // checks if letter is small
                {
                    Arr[i] = (char)(Arr[i] - 32);
                } 
                                     
            }
        
        return new String(Arr);         
    }   
    
}

class Q3_Assignment32
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;
       
        StringX strobj = new StringX();
        String sRet = null;
    
        System.out.println("Enter the String :");
        Arr = sobj.nextLine();
        
        sRet = strobj.strToggleX(Arr);
        System.out.println("Modified String is: "+sRet);

    }
}