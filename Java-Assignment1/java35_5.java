
import java.util.*;

class StringX
{
    

    public boolean  check_palindrome( String str1 )
    {
        char A[]= str1.toCharArray();
        

        for (int i=0 ; i<str1.length() ; i++)
        {
          System.out.print(A[i]);             
        }

        for (int i=0 ; i<str1.length() ; i++)
        {

            if(A[i] >='a' && A[i]<='z')
            {
                A[i]= (char) (A[i] + 'A' - 'a');
            }
            
        }

        int istart=0;
        int iEnd = str1.length()-1;
    
        boolean bFlag= true;

        
        while(istart < iEnd)
        {
          
          if( A[istart] == A[iEnd])
          {
            istart++;
            iEnd--;
          }
          else
          {
            bFlag = false;
            break;
          }
         

          
        }

        return bFlag;

    }
       
       

}

class Java35_5
{
    public static void main(String Ab[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter your full name");
        String str1 = sobj.nextLine();

        

        StringX  obj = new StringX();

        boolean bRet = obj.check_palindrome( str1 );
        if(bRet==true)
        {
            System.out.println("The given string is  Palindroeme");
        }
        else
        {
            System.out.println("The given string is not Palindroeme");
        }
        

        sobj.close();

    }
}
/*
Please enter your full name
1abccBA1
1abccBA1The given string is  Palindroeme


 */