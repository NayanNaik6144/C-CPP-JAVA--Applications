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
        
        System.out.println("The Numbers which are divisible by 3 and 5 are ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if( Arr[iCnt] % 3 ==0 && Arr[iCnt] % 5==0 )
            {
                System.out.println(Arr[iCnt]);
            }
        }
       
    }
}

class Java32_5
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
15
Enter the element no : 2
80
Enter the element no : 3
30
Enter the element no : 4
90
Enter the element no : 5
93
Enter the element no : 6
88
Elements of array are :
15      80      30      90      93      88
The Numbers which are divisible by 3 and 5 are
15
30
90


 */
