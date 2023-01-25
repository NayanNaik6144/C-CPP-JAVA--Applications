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

    public void Summations_Of_digits_Of_elements_Of_Array()
    {
        for(int i=0 ; i<Arr.length ; i++)
        {
            int iDigit=0;
            int iNum= Arr[i];
            int iSum=0;

            while(iNum !=0)
            {
                iDigit = iNum %10 ;
                
                iSum= iSum + iDigit;

                iNum = iNum /10;

            }

            Arr[i] = iSum;

           
        }

    }
}

class Java43_2
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        obj.Summations_Of_digits_Of_elements_Of_Array();
        obj.Display();
        
        sobj.close();
    }
}
/*
Enter the size of array that you want to create
6
Please enter 6 elements
Enter the element no : 1
89
Enter the element no : 2
687
Enter the element no : 3
56
Enter the element no : 4
549
Enter the element no : 5
87
Enter the element no : 6
9
Elements of array are :
89      687     56      549     87      9
Elements of array are :
17      21      11      18      15      9

 */
