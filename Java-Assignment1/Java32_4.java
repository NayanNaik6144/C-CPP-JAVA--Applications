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

    public void DisplayDivisibleBy_5()
    {
        
        System.out.println("The Numbers which are divisible by 11 are ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if( Arr[iCnt] % 11 ==0 )
            {
                System.out.println(Arr[iCnt]);
            }
        }
       
    }
}

class Java32_4
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        obj.DisplayDivisibleBy_5();
       
        
        sobj.close();
    }
}
/*
Enter the size of array that you want to create
6
Please enter 6 elements
Enter the element no : 1
88
Enter the element no : 2
66
Enter the element no : 3
85
Enter the element no : 4
3
Enter the element no : 5
93
Enter the element no : 6
80
Elements of array are :
88      66      85      3       93      80
The Numbers which are divisible by 11 are
88
66

 */
