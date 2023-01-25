import java.util.*;

class ArrayX
{
    public int Arr[];
    public int Brr[];

    public ArrayX(int iSize1 , int iSize2)
    {
        Arr = new int[iSize1];
        Brr = new int[iSize2];
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

        System.out.println("Please enter Second Array "+Brr.length + " elements ");
        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Brr[iCnt] = sobj.nextInt();
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

        System.out.println("Elements of second array are : ");

        for(int iCnt =0; iCnt < Brr.length; iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }

        System.out.println();
    }

    
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize1 , int iSize2)
    {
        super(iSize1 , iSize2);
    }

    public void ConCat_Two_Array()
    {
        int A= Arr.length;
        int B= Brr.length;

        int C = A+B;

        // creating New array
        int Crr[] = new int[C];

        for (int i = 0; i < A; i = i + 1) {
            // Storing the elements in 
            // the resultant array
            Crr[i] = Arr[i];
        }
  
        // Loop to concat the elements of second 
        // array into resultant array
        for (int i = 0; i < B; i = i + 1) {
  
            // Storing the elements in the 
            // resultant array
            Crr[A + i] = Brr[i];
        }

        // Loop to print the elements of 
        System.out.println( "resultant array after merging"); 
        for (int i = 0; i < C; i = i + 1) 
        {
              
            // print the element
            System.out.print(Crr[i]);
        }
        System.out.println();

    }
}

class Java41_3
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of first array that you want to create ");
        int iSize1 = sobj.nextInt();

        System.out.println("Enter the size of second array that you want to create ");
        int iSize2 = sobj.nextInt();


        MarvellousX obj = new MarvellousX(iSize1 , iSize2);
        
        obj.Accept();
        obj.Display();

        obj.ConCat_Two_Array();
        

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
