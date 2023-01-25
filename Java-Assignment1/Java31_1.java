import java.util.*;

class StringX 
{
    public int String_Demo(String str)
    {
        char A[]= str.toCharArray();
        int iCnt=0;
        
        for (int i=0 ; i<str.length() ; i++)
        {
           if(A[i] >= 'A' && A[i]<= 'Z')
           {
            iCnt++;
           }     
             
        }
        return iCnt;

    }

}

class Java31_1
{
    public static void main(String args[]) 
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter your full name");
        String str = sobj.nextLine();


        StringX  obj = new StringX();

        int iRet = obj.String_Demo(str);

        System.out.println("The Total Number of capitals letters from Given sentence are "+ iRet);

        sobj.close();
        
     }
}

/*
Please enter your full name
MarvellousInfoSystem
The Total Number of capitals letters from Given sentence are 3

 */