

import java.util.*;

class StringX 
{
    public void Reverese(String str)
    {
        char A[]= str.toCharArray();
        System.out.println("string before Reverse");  

        for (int i=0 ; i<str.length() ; i++)
        {
          System.out.print(A[i]);             
        }

        System.out.println("\n string after Reverse");  

        
        int istart=0;
        int iEnd = str.length()-1;
        char cTemp;

        
        while(istart < iEnd)
        {
          cTemp = A[istart];
          A[istart] = A[iEnd];
          A[iEnd] = cTemp;  

          istart++;
          iEnd--;
        }

        for (int i=0 ; i<str.length() ; i++)
        {
          System.out.print(A[i]);             
        }

        
        

    }

}

class Java31_6
{
    public static void main(String args[]) 
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter your full name");
        String str = sobj.nextLine();


        StringX  obj = new StringX();

        obj.Reverese(str);

        sobj.close();
        
     }
}

/*
Please enter your full name
Nayan
string before Reverse
Nayan
 string after Reverse
nayaN
 */