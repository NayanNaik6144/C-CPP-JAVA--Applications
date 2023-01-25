

import java.util.*;

class StringX 
{
    public boolean Check_Vowls(String str)
    {
        char A[]= str.toCharArray();
        int iCnt=0;
        
        for (int i=0 ; i<str.length() ; i++)
        {
           if(A[i]=='a' || A[i]=='e' || A[i]=='o' || A[i]=='i' || A[i]=='u')
           {
             iCnt++;
             break;
           }
           else if(A[i]=='A' || A[i]=='E' || A[i]=='O' || A[i]=='U' || A[i]=='I' )
           {
            iCnt++;
            break;
           }
             
        }
        if(iCnt !=0)
        {
            return true;
        }
        else
        {
            return false;
        }
        

    }

}

class Java31_4
{
    public static void main(String args[]) 
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter your full name");
        String str = sobj.nextLine();


        StringX  obj = new StringX();

        Boolean bRet = obj.Check_Vowls(str);

        if(bRet == true)
        {
            System.out.println("Yes the Given sentence Contains vowles Letters ");
        }
        else
        {
            System.out.println("No , the Given sentence does not  Contains vowles Letters ");
        }

        

        sobj.close();
        
     }
}

/*
Please enter your full name
xyz
No , the Given sentence does not  Contains vowles Letters

C:\Users\Nayan\Desktop\PP\Java>java Java31_4
Please enter your full name
Nayan
Yes the Given sentence Contains vowles Letters


 */