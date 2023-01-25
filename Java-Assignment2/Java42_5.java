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

    public boolean Check_Palindrome()
    {
        boolean bFlag=true;
        int iStart=0;
        int iEnd= Arr.length-1;

        while(iStart <iEnd)
        {
            if(Arr[iStart] == Arr[iEnd])
            {
                
            }
            else
            {
                bFlag= false;
                break;
            }

            iStart++;
            iEnd--;
        }

        for(int i=0 ; i<Arr.length ; i++)
        {
            int iDigit=0;
            int iNum= Arr[i];
            int iRev=0;

            while(iNum !=0)
            {
                iDigit = iNum %10 ;
                
                iRev= iRev*10 + iDigit;

                iNum = iNum /10;

            }

            if( iRev == Arr[i])
            {
                
            }
            else
            {
                bFlag=false;
                break;
            }
        }

        

        return bFlag;
    }
}

class Java42_5
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        boolean bRet = obj.Check_Palindrome();
        if(bRet == true)
        {
            System.out.println("The Given array and its elements are palindrome");
        }
        else
        {
            System.out.println("The Given array and its elements are not palindrome");
        }
        
        sobj.close();
    }
}
/*
Enter the size of array that you want to create
5
Please enter 5 elements
Enter the element no : 1
11
Enter the element no : 2
252
Enter the element no : 3
378873
Enter the element no : 4
252
Enter the element no : 5
11
Elements of array are :
11      252     378873  252     11
The Given array and its elements are palindrome


Enter the size of array that you want to create
5
Please enter 5 elements
Enter the element no : 1
11
Enter the element no : 2
252
Enter the element no : 3
378873
Enter the element no : 4
77
Enter the element no : 5
11
Elements of array are :
11      252     378873  77      11
The Given array and its elements are not palindrome

 */