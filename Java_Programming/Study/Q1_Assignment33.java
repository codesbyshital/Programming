///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  ChkChar
// Description:     Assignment_33: Q.1 :Write a program which accept string from user and accept one character,
//                                       check whether that character present in string or not.
// Input : "Marvellous"
//          e 
// Output:  Character found
// Input : "Marvellous"
//          E 
// Output:  Character found
// Input : "Marvellous"
//          m 
// Output:  Character found
// Input : "Marvellous"
//          W 
// Output:  Character not found
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public boolean ChkChar(String str, char ch)
    {
        int i = 0;
        boolean bFlag = false;
        
        char Arr[] = str.toCharArray();     
        
        for(i = 0; i < Arr.length; i++)
            {  
                if(ch == Arr[i] || (ch - 32) == Arr[i] || (ch + 32) == Arr[i])    // check if Capital/small/Special char
                {
                    bFlag = true;
                }                                    
                                     
            }
        
        return bFlag;         
    }   
    
}

class Q1_Assignment33
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;
       
        StringX strobj = new StringX();
            
        System.out.println("Enter the String :");
        Arr = sobj.nextLine();

        System.out.println("Enter a character to search in string");
        char ch = sobj.next().charAt(0);
        
        boolean bRet = strobj.ChkChar(Arr,ch);

        if(bRet == true)
        {
            System.out.println("Character Found");
        }
        else
        {
            System.out.println("Character not found");
        }  
          
        sobj.close();    

    }
}