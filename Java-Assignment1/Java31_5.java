

import java.util.*;

class StringX 
{
    public void Display_Reverese(String str)
    {
        char A[]= str.toCharArray();
        System.out.println("string before Reverse");  

        for (int i=0 ; i<str.length() ; i++)
        {
          System.out.print(A[i]);             
        }
        System.out.println("string after Reverse");   
        for (int i=str.length()-1 ; i>=0 ; i--)
        {
          System.out.print(A[i]);             
        }
        

    }

}

class Java31_5
{
    public static void main(String args[]) 
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter your full name");
        String str = sobj.nextLine();


        StringX  obj = new StringX();

        obj.Display_Reverese(str);

        sobj.close();
        
     }
}

/*
Please enter your full name
Nayan
string before Reverse
Nayanstring after Reverse
nayaN
 */