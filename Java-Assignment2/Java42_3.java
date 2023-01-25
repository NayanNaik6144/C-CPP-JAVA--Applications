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

        System.out.println("Please enter First Array  "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
     
        sobj.close();
    }


    public void Display()
    {
        System.out.println("Elements of first array are : ");

        for(int iCnt =0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();
    }

    
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize )
    {
        super(iSize);
    }

    public int [] Coppy_reverse_Array()
    {
        int A= Arr.length;
        int Brr[]= new int[A];
       
        int j=0;

        for (int i =A-1; i>=0; i--) 
        {
            Brr[j] = Arr[i];
            j++;
        }
  
        System.out.println();

        return Brr;

    }
}

class Java42_3
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of first array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        int Brr[]=obj.Coppy_reverse_Array();

        System.out.println( "resultant array after reverse"); 

        for (int i = 0; i <Brr.length; i = i + 1) 
        {
              
            // print the element
            System.out.print(Brr[i]+"\t");
        }
        System.out.println();


        
 
        sobj.close();
    }
}
/*
Enter the size of first array that you want to create
4
Enter the size of second array that you want to create
6
Please enter First Array  4 elements
Enter the element no : 1
12
Enter the element no : 2
57
Enter the element no : 3
28
Enter the element no : 4
3
Please enter Second Array 6 elements
Enter the element no : 1
99
Enter the element no : 2
23
Enter the element no : 3
54
Enter the element no : 4
58
Enter the element no : 5
6
Enter the element no : 6
67
Elements of first array are :
12      57      28      3
Elements of second array are :
99      23      54      58      6       67

resultant array after merging
12 57 28 3 99 23 54 58 6 67

 */
