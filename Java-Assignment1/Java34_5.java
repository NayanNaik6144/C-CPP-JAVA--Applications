
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
        int iSumOdd=0;
        int iSumEven=0;
        int iDigit=0;

        while (iNum !=0)
        {
            iDigit = iNum % 10 ;

            if(iDigit % 2 !=0)
            {
                iSumOdd = iSumOdd + iDigit;
            }
            else
            {
                iSumEven = iSumEven+ iDigit;
            }

            iNum= iNum / 10 ;
        }
        return iSumEven - iSumOdd;

    }


}

class java34_5
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
The Count of Odd digits  : -15

C:\Users\Nayan\Desktop\PP\Java>java java34_5
Enter the value
1018
The Count of Odd digits  : 6

C:\Users\Nayan\Desktop\PP\Java>java java34_5
Enter the value
9440
The Count of Odd digits  : -1
 */