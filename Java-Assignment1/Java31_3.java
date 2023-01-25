
import java.util.*;

class StringX 
{
    public int String_Demo(String str)
    {
        char A[]= str.toCharArray();
        int iCntS=0;
        int iCntC=0;
        
        for (int i=0 ; i<str.length() ; i++)
        {
           if(A[i] >= 'a' && A[i]<= 'z')
           {
            iCntS++;
           } 
           else
           {
            iCntC++;
           }   
             
        }
        return iCntS-iCntC;

    }

}

class Java31_3
{
    public static void main(String args[]) 
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter your full name");
        String str = sobj.nextLine();


        StringX  obj = new StringX();

        int iRet = obj.String_Demo(str);

        System.out.println("The Difference between frequency of  capitals and small letters from Given sentence are "+ iRet);

        sobj.close();
        
     }
}

/*
Please enter your full name
MarvellouS
The Difference between frequency of  capitals and small letters from Given sentence are 6



 */