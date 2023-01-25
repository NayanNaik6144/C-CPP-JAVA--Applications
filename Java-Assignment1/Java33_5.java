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

    public int Product_Of_Odd()
    {
        int iProOdd = 1;
        

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 != 0)
            {
                iProOdd = iProOdd*Arr[iCnt];
            }
            
            
        }
       if(iProOdd ==1)
       {
        iProOdd=0;
        return iProOdd;
       }
       else
       {
        return iProOdd;
       }
    }
}

class java33_5
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        int iRet = obj.Product_Of_Odd();
        System.out.println("Product of Odd Numbers is  : "+iRet);
        
        sobj.close();
    }
}
/*
 Enter the size of array that you want to create
4
Please enter 4 elements
Enter the element no : 1
14
Enter the element no : 2
12
Enter the element no : 3
88
Enter the element no : 4
66
Elements of array are :
14      12      88      66
Product of Odd Numbers is  : 0 
 */