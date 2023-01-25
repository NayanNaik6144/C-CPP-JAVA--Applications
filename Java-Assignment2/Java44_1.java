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

    public void Replace_Small_LettersToCapitals_Letters()
    {

        for(int i=0 ; i<Arr.length ; i++)
        {
            if( Arr[i] >='A' && Arr[i]<='Z')
            {
                Arr[i] = (char) (Arr[i] + 'a' - 'A');
                
            }
           
        }

    }
}

class Java44_1
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        obj.Replace_Small_LettersToCapitals_Letters();
        obj.Display();

        
       
        
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
J
Enter the Character  no : 4
b
Enter the Character  no : 5
R
Enter the Character  no : 6
b
Enter the Character  no : 7
A
Enter the Character  no : 8
D
Enter the Character  no : 9
g
Enter the Character  no : 10
G
Characters  of array are :
b       N       J       b       R       b       A       D       g       G
Characters  of array are :
b       n       j       b       r       b       a       d       g       g


*/
