import java.util.*;

class StringX
{
    

    public boolean Check_First_N_Contains( String str1 , String str2 ,int iNum)
    {
        char A[]= str1.toCharArray();
        char B[]= str2.toCharArray();
        int iCnt=0;

        if( iNum < str2.length())
        {
          
            for (int i=0 ; i<iNum ; i++)
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
        else
        {
            str1 = str1.concat(str2);
            char C[] = str1.toCharArray();

            for (int i=0 ; i<str1.length() ; i++)
            {
                System.out.print(C[i]);             
            }

            System.out.println( );  


           

        }

        
        
        if( iCnt == iNum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

class Java35_3
{
    public static void main(String Ab[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter first string ");
        String str1 = sobj.nextLine();

        System.out.println("Please enter second  string");
        String str2 = sobj.nextLine();

        System.out.println("Enetr Fisrt N contains of string for that enter Number ");
        int iNum = sobj.nextInt();


        StringX  obj = new StringX();

        boolean bRet = obj.Check_First_N_Contains( str1 ,str2 , iNum);
        if(bRet == true)
        {
            System.out.println("First N conations " +iNum+ " of string are same ");
        }
        else
        {
            System.out.println("First N conations " +iNum+ " of string are not  same ");
        }

        sobj.close();

    }
}
/*
Marvellous Infosystem
Please enter second  string
Pune
Enetr Fisrt N contains of string for that enter Number
10
Marvellous Infosystem Pune
First N conations 10 of string are not  same
 */