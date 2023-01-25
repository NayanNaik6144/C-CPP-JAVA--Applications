
import java.util.*;

class StringX
{
    

    public void Reverse_And_Toggle( String str1 )
    {
        char A[]= str1.toCharArray();
        System.out.println("string before Reverse");  

        for (int i=0 ; i<str1.length() ; i++)
        {
          System.out.print(A[i]);             
        }

        System.out.println("\n string after Reverse and Toggle ");  

        
        int istart=0;
        int iEnd = str1.length()-1;
        char cTemp;

        
        while(istart < iEnd)
        {
          cTemp = A[istart];
          A[istart] = A[iEnd];
          A[iEnd] = cTemp;  

          istart++;
          iEnd--;
        }

        for (int i=0 ; i<str1.length() ; i++)
        {

            if(A[i] >='a' && A[i]<='z')
            {
                A[i]= (char) (A[i] + 'A' - 'a');
            }
            else if(A[i] >='A' && A[i]<='Z')
            {
                A[i]= (char) (A[i] + 'a' - 'A');
            }
          
        }

        for (int i=0 ; i<str1.length() ; i++)
        {
          System.out.print(A[i]);             
        }
        

    }
       
       

}

class Java35_4
{
    public static void main(String Ab[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter your full name");
        String str1 = sobj.nextLine();

        

        StringX  obj = new StringX();

        obj.Reverse_And_Toggle( str1 );
        

        sobj.close();

    }
}
/*
Please enter your full name
NAyanNaik
string before Reverse
NAyanNaik
 string after Reverse and Toggle
KIAnNAYan

 */