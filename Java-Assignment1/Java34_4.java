import java.util.*;

class DigitsX
{
    public int iNum;

    public DigitsX(int A)
    {
        iNum = A;
    }

    public int Count_Of_Odd_Digits()
    {
        if( iNum <0)
        {
            iNum = - iNum;
        }
        int icount =0;
        int iDigit=0;

        while (iNum !=0)
        {
            iDigit = iNum % 10 ;

            if(iDigit % 2 !=0)
            {
                icount++;
            }

            iNum= iNum / 10 ;
        }
        return icount;

    }


}

class java34_4
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the value  ");
        int iValue = sobj.nextInt();

        DigitsX obj = new DigitsX(iValue);
        
        int iRet = obj.Count_Of_Odd_Digits();
        System.out.println("The Count of Odd digits  : "+iRet);
        
        sobj.close();
    }
}

/*
Enter the value
2395
The Count of Odd digits  : 3

C:\Users\Nayan\Desktop\PP\Java>java java34_4
Enter the value
1018
The Count of Odd digits  : 2

 */