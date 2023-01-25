
import java.util.*;

class StringX 
{
    public int String_Demo(String str)
    {
        char A[]= str.toCharArray();
        int iCnt=0;
        
        for (int i=0 ; i<str.length() ; i++)
        {
           if(A[i] >= 'a' && A[i]<= 'z')
           {
            iCnt++;
           }     
             
        }
        return iCnt;

    }

}

class Java31_2
{
    public static void main(String args[]) 
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter your full name");
        String str = sobj.nextLine();


        StringX  obj = new StringX();

        int iRet = obj.String_Demo(str);

        System.out.println("The Total Number of Smalls letters from Given sentence are "+ iRet);

        sobj.close();
        
     }
}

/*
Please enter your full name
Marvellous
The Total Number of Smalls letters from Given sentence are 9


 */