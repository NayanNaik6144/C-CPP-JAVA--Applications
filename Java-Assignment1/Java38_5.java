import java.util.*;

class Pattern
{
    

    public void Display_Pattern(String str)
    {
        char A[]= str.toCharArray();
        int iCols1=0;
        int iCols2= str.length();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter How many time u want ");
        int iRow= sobj.nextInt();
        sobj.close();

        for(int i=0; i < iRow ; i++)
        {
            if(iCols1 < str.length())
            {
                for(int j = 0 ; j <=iCols1 ; j++)
                {
                    System.out.print(A[j]+"\t");
                }
                System.out.println();
                iCols1++;
            }
            else
            {
                iCols2--;
                for(int j = 0 ; j <iCols2 ; j++)
                {
                    System.out.print(A[j]+"\t");
                }
                System.out.println();
                
            }
            
            
        }

        

    }

}

class Java38_5
{
    public static void main(String Ab[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter your full name");
        String str = sobj.nextLine();

        Pattern  obj = new Pattern();

        obj.Display_Pattern( str);

        sobj.close();

    }
}

/*
Please enter your full name
Hello
Please enter How many time u want
9
H
H       e
H       e       l
H       e       l       l
H       e       l       l       o
H       e       l       l
H       e       l
H       e
H
*/