import java.util.*;

class ArrayX
{
    public char Arr[];

    public ArrayX(int iSize)
    {
        Arr = new char[iSize];
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
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public int Count_Vowels_Letters()
    {
        int iCount=0;

        for(int i=0 ; i<Arr.length ; i++)
        {
            if( Arr[i] =='a' || Arr[i]=='e'|| Arr[i] =='i' || Arr[i]=='o'|| Arr[i]=='u')
            {
                iCount++;
                
            }
            else if( Arr[i] =='A' || Arr[i]=='E'|| Arr[i] =='I' || Arr[i]=='U'|| Arr[i]=='O')
            {
                iCount++;
                
            }
           
        }

        return iCount;
    }
}

class Java44_2
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
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
Please enter 10 elements
Enter the Character  no : 1
b
Enter the Character  no : 2
N
Enter the Character  no : 3
e
Enter the Character  no : 4
B
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
i
Characters  of array are :
b       N       e       B       R       b       A       i       G       i
Total Vowels in give char Array are: 4


*/

