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

    public void summation_Array()
    {
        int iSumArr = 0;
        int iSumBrr = 0;

        for (int i = 0; i < Arr.length; i = i + 1) 
        {
            iSumArr = iSumArr + Arr[i];
        }
  
        
        for (int i = 0; i < Brr.length; i = i + 1) 
        {
            iSumBrr = iSumBrr + Brr[i];
        }

        System.out.println("The summation of array first is :"+iSumArr);
        System.out.println("The summation of array Second is :"+iSumBrr);
    }
}

class Java41_5
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

        obj.summation_Array();
        

        sobj.close();
    }
}
/*
Enter the size of first array that you want to create
6
Enter the size of second array that you want to create
4
Please enter First Array  6 elements
Enter the element no : 1
2
Enter the element no : 2
9
Enter the element no : 3
7
Enter the element no : 4
5
Enter the element no : 5
2
Enter the element no : 6
3
Please enter Second Array 4 elements
Enter the element no : 1
9
Enter the element no : 2
3
Enter the element no : 3
5
Enter the element no : 4
5
Elements of first array are :
2       9       7       5       2       3
Elements of second array are :
9       3       5       5

The summation of array first is :28
The summation of array Second is :22


 */