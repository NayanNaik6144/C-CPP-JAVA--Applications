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

    public void Display_Even()
    {
        System.out.println("The even elements from First Array are :");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if( Arr[iCnt] % 2 == 0)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
            
        }
        System.out.println();

        System.out.println("The even elements from Second Array are :");

        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if( Brr[iCnt] % 2 == 0)
            {
                System.out.print(Brr[iCnt]+"\t");
            }
            
        }
        System.out.println();


        
    }
}

class Java41_2
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

        obj.Display_Even();
        

        sobj.close();
    }
}
/*
Enter the size of first array that you want to create
6
Enter the size of second array that you want to create
6
Please enter First Array  6 elements
Enter the element no : 1
2
Enter the element no : 2
9
Enter the element no : 3
6
Enter the element no : 4
5
Enter the element no : 5
2
Enter the element no : 6
3
Please enter Second Array 6 elements
Enter the element no : 1
45
Enter the element no : 2
6
Enter the element no : 3
12
Enter the element no : 4
18
Enter the element no : 5
23
Enter the element no : 6
4
Elements of first array are :
2       9       6       5       2       3
Elements of second array are :
45      6       12      18      23      4
The even elements from First Array are :
2       6       2
The even elements from Second Array are :
6       12      18      4
 */