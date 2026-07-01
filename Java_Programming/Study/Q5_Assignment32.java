///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CountSpaces
// Description:     Assignment_32: Q.5 :Write a program which accept string from user and count number of white spaces
//                                       in that string.
// Input : "Marvellous"
// Output:  0
// Input : "Marvellous Infosystem"
// Output:  1
//          
// Date:            25/06/2026
// Author:          Shital Ajit Nikam   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{    
    public int CountSpaces(String str)
    {
        int i = 0, iCnt = 0;
        
        char Arr[] = str.toCharArray();
       

        for(i = 0; i < Arr.length; i++)
            {  
                if(Arr[i] == ' ')     
                {
                    iCnt++;
                }                               
                                     
            }
        
        return iCnt;         
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
        
        int iRet = strobj.CountSpaces(Arr);
        System.out.println("Number of white spaces are: "+iRet);

    }
}