import java.util.*;

class StringX
{
    

    public boolean Check_Two_string_Same_orNot( String str1 ,String str2)
    {
        char A[]= str1.toCharArray();
        char B[]= str2.toCharArray();
        int iCnt=0;;
        if( str1.length() == str2.length())
        {
            
            for (int i=0 ; i<str1.length() ; i++)
            {
                  if( A[i] == B[i])
                  {
                    iCnt++;
                  }  
                  else
                  {
                    break;
                  }
                
            }

        }
        
        if( iCnt == str1.length())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

class Java35_2
{
    public static void main(String Ab[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter your full name");
        String str1 = sobj.nextLine();

        System.out.println("Please enter your full name");
        String str2 = sobj.nextLine();


        StringX  obj = new StringX();

        boolean bRet = obj.Check_Two_string_Same_orNot( str1 , str2);
        if(bRet == true)
        {
            System.out.println("The Given two string are same ");
        }
        else
        {
            System.out.println("The Given two string are not same ");
        }

        sobj.close();

    }
}
/*
 Please enter your full name
Nayan
Please enter your full name
Naik
The Given two string are not same

Please enter your full name
Marvellous Infosystem
Please enter your full name
Marvellous Infosystem
The Given two string are same

 */