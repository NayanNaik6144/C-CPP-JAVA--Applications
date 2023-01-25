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

    public int Difference_Bet_OddAndEven()
    {
        int iSumOdd = 0;
        int iSumeven = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if( Arr[iCnt] % 2 == 0)
            {
                iSumeven = iSumeven + Arr[iCnt];
            }
            else
            {
                iSumOdd = iSumOdd + Arr[iCnt];
            }
            
        }
        return iSumeven - iSumOdd;
    }
}

class Java32_1
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        int iRet = obj.Difference_Bet_OddAndEven();
        System.out.println("Difference between summation of odd and even numbers : "+iRet);
        
        sobj.close();
    }
}
/*
 Enter the size of array that you want to create
6
Please enter 6 elements
Enter the element no : 1
85
Enter the element no : 2
66
Enter the element no : 3
3
Enter the element no : 4
80
Enter the element no : 5
93
Enter the element no : 6
88
Elements of array are :
85      66      3       80      93      88
Difference between summation of odd and even numbers : 53

 */