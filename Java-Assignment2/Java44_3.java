import java.util.*;

class ArrayX
{
    public char Arr[];
    public char cChar;

    public ArrayX(int iSize , char C)
    {
        Arr = new char[iSize];
        cChar =C ;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the Character  no : "+ (iCnt+1));
            Arr[iCnt] = sobj.next().charAt(0);
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Characters  of array are : ");

        for(int iCnt =0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize , char cChar)
    {
        super(iSize , cChar);
    }

    public int Count_Vowels_Letters()
    {
        int iCount=0;

        for(int i=0 ; i<Arr.length ; i++)
        {
            if( Arr[i] >='A' && Arr[i]<='Z')
            {
                Arr[i] = (char) (Arr[i] + 'a' - 'A');
                
            }
           
        }

        for(int i=0 ; i<Arr.length ; i++)
        {
            if( Arr[i]== cChar)
            {
                iCount++;
            }
           
        }

        return iCount;
    }
}

class Java44_3
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        System.out.println("Enter the Char which want to check for there occurence in Array ");
        char cChar = sobj.next().charAt(0);

        MarvellousX obj = new MarvellousX(iSize ,cChar);
        
        obj.Accept();
        obj.Display();

        int iRet = obj.Count_Vowels_Letters();
        System.out.println("Total Vowels in give char Array are: "+iRet);

        
       
        
        sobj.close();
    }
}
/*
Enter the size of array that you want to create
10
Enter the Char which want to check for there occurence in Array
b
Please enter 10 elements
Enter the Character  no : 1
N
Enter the Character  no : 2
e
Enter the Character  no : 3
B
Enter the Character  no : 4
b
Enter the Character  no : 5
R
Enter the Character  no : 6
b
Enter the Character  no : 7
A
Enter the Character  no : 8
i
Enter the Character  no : 9
G
Enter the Character  no : 10
B
Characters  of array are :
N       e       B       b       R       b       A       i       G       B
Total Vowels in give char Array are: 4


*/

