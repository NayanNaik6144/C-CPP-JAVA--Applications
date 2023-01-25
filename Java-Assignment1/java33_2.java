import java.util.*;

class ArrayX
{
    public int Arr[];
    public int Check_Num;


    public ArrayX(int iSize , int iNum)
    {
        Arr = new int[iSize];
        Check_Num = iNum ;
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
    public MarvellousX(int iSize , int iNum)
    {
        super(iSize,iNum);
    }

    public int Find_Index()
    {
        int iCnt=0;

        for( iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Check_Num == Arr[iCnt])
            {
                break;   
            }
            
        }
        return iCnt ;
       
    }
}

class java33_2
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        System.out.println("Enter Number which u want to search in given array ");
        int iNum = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize , iNum);
        
        obj.Accept();
        obj.Display();

        int iRet = obj.Find_Index();

        System.out.println("the iNum "+ iNum + " is occur at "+iRet + " from staring of array ");
        
        
        sobj.close();
    }
}
/*
 Enter the size of array that you want to create
6
Enter Number which u want to search in given array
66
Please enter 6 elements
Enter the element no : 1
85
Enter the element no : 2
93
Enter the element no : 3
3
Enter the element no : 4
66
Enter the element no : 5
88
Enter the element no : 6
60
Elements of array are :
85      93      3       66      88      60
the iNum 66 is occur at 3 from staring of array


 */