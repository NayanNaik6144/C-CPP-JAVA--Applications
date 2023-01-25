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

    public boolean Check_Presence()
    {
        boolean bFlag = false;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Check_Num == Arr[iCnt])
            {
                bFlag = true;
                break;   
            }
            
        }

        return bFlag;
       
    }
}

class java33_1
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

        boolean bRet = obj.Check_Presence();
        if(bRet == true)
        {
            System.out.println("The given numbers iNum " +iNum+ " Is Present in the given array ");            
        }
        else
        {
            System.out.println("The given numbers iNum " +iNum+ " Is not  Present in the given array "); 
        }
        
        
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
88
Enter the element no : 2
66
Enter the element no : 3
80
Enter the element no : 4
93
Enter the element no : 5
3
Enter the element no : 6
85
Elements of array are :
88      66      80      93      3       85
The given numbers iNum 66 Is Present in the given array


 */