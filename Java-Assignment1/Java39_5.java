import java.util.*;

class Pattern
{
    

    public void Display_Pattern(String str)
    {
        char A[]= str.toCharArray();
        int iCols=str.length();
        
        for( int i= 0 ; i<str.length() ; i++)
        {

            for (int j = 0 ; j <iCols ; j++)
            {
                if( i >= j)
                {
                System.out.print(A[j]+"\t");  
                }
                else
                {
                    System.out.print("*\t") ;
                }
            }

            System.out.println();
        }

        for( int i= 0 ; i<str.length(); i++)
        {

            for (int j = 0 ; j <iCols ; j++)
            {
                if( j < str.length() - i )
                {
                    System.out.print(A[j]+"\t");  
                }
                else 
                {
                    System.out.print("*\t");  

                }
            }

            System.out.println();
        }
        
    }

}

class Java39_5
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
H       *       *       *       *
H       e       *       *       *
H       e       l       *       *
H       e       l       l       *
H       e       l       l       o
H       e       l       l       o
H       e       l       l       *
H       e       l       *       *
H       e       *       *       *
H       *       *       *       *
 */