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
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.next().charAt(0);
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Elements of array are : ");

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

    public int Count_Capitals_Letters()
    {
        int iCount=0;
        for(int i=0 ; i<Arr.length ; i++)
        {
            if( Arr[i] >='A' && Arr[i]<='Z')
            {
                iCount++;
            }

           
        }
        return iCount;

    }
}

class Java43_3
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        int iRet=obj.Count_Capitals_Letters();

        System.out.println("The Total numbers of capitals letters in Array  :"+iRet);
       
        
        sobj.close();
    }
}
/*
Enter the size of array that you want to create
10
Please enter 10 elements
Enter the element no : 1
b
Enter the element no : 2
N
Enter the element no : 3
j
Enter the element no : 4
B
Enter the element no : 5
R
Enter the element no : 6
b
Enter the element no : 7
A
Enter the element no : 8
D
Enter the element no : 9
D
Enter the element no : 10
g
Elements of array are :
b       N       j       B       R       b       A       D       D       g
The Total numbers of capitals letters in Array  :6

*/