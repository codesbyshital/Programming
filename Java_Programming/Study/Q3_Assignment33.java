///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FirstChar
// Description:     Assignment_33: Q.3 :Write a program which accept string from user and accept one character,
//                                       return index of first occurrence of that character.
// Input : "Marvellous Multi OS"
//          M
// Output:  0
// Input : MarvellousS
//          l
// Output:  6
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public int FirstChar(String str, char ch)
    {
        int i = 0, iCnt = 0;
               
        char Arr[] = str.toCharArray();   

        for(i = 0; i < Arr.length; i++)
            {  
                if(ch == Arr[i] || (ch - 32) == Arr[i] || (ch + 32) == Arr[i])     
                {
                    iCnt = i + 1;
                    break;                                                           
                }   
                else
                {
                    iCnt = -1;
                }
                                   
            }
        
        return iCnt;         
    }   
    
}

class Q3_Assignment33
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;
       
        StringX strobj = new StringX();
            
        System.out.println("Enter the String :");
        Arr = sobj.nextLine();

        System.out.println("Enter a character:");
        char ch = sobj.next().charAt(0);
        
        int iRet = strobj.FirstChar(Arr,ch);
        System.out.println("Character is at Index: "+iRet);     
        
        sobj.close();

    }
}