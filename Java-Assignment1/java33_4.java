import java.util.*;

class ArrayX
{
    public int Arr[];
    public int Check_Num1;
    public int Check_Num2;


    public ArrayX(int iSize , int iNum1 ,int iNum2)
    {
        Arr = new int[iSize];
        Check_Num1 = iNum1 ;
        Check_Num2 = iNum2 ;
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

        for(int iCnt =0 ; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize , int iNum1 , int iNum2 )
    {
        super(iSize,iNum1 , iNum2);
    }

    public void Display_Between_Range()
    {
        int iCnt=0;

        System.out.println("The Elements from array between given range"+ Check_Num1+ "&" +Check_Num2 + " are :");
        for( iCnt = Arr.length-1; iCnt>=0; iCnt--)
        {
            if( Arr[iCnt] >= Check_Num1 && Arr[iCnt] <= Check_Num2)
            {
                System.out.println(Arr[iCnt]);
            }
            
        }
       
    }
}

class java33_4
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        System.out.println("Enter Number which u want to search in given array ");
        int iNum1 = sobj.nextInt();
        System.out.println("Enter Number which u want to search in given array ");
        int iNum2 = sobj.nextInt();


        MarvellousX obj = new MarvellousX(iSize , iNum1 , iNum2);
        
        obj.Accept();
        obj.Display();

        obj.Display_Between_Range();

        
        
        
        sobj.close();
    }
}
/*
 60
Please enter 6 elements
Enter the element no : 1
88
Enter the element no : 2
60
Enter the element no : 3
15
Enter the element no : 4
85
Enter the element no : 5
80
Enter the element no : 6
93
Elements of array are :
88      60      15      85      80      93
The Elements from array between given range30&60 are :
60



 */