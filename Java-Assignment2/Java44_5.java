import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
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

    public void Display_Pattern()
    {
        

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            for(int i = 0; i < Arr[iCnt]; i++)
            {
                System.out.print(" * \t");
            }
            System.out.println();
        }
        
    }
}

class Java44_5
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        obj.Display_Pattern();
        
        
        sobj.close();
    }
}
/*
Enter the size of array that you want to create
7
Please enter 7 elements
Enter the element no : 1
8
Enter the element no : 2
9
Enter the element no : 3
7
Enter the element no : 4
6
Enter the element no : 5
4
Enter the element no : 6
2
Enter the element no : 7
4
Elements of array are :
8       9       7       6       4       2       4
 *       *       *       *       *       *       *       *
 *       *       *       *       *       *       *       *       *
 *       *       *       *       *       *       *
 *       *       *       *       *       *
 *       *       *       *
 *       *
 *       *       *       *
 */