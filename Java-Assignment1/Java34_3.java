import java.util.*;

class DigitsX
{
    public int iNum;

    public DigitsX(int A)
    {
        iNum = A;
    }

    public int Count_Of_Eeven_Digits()
    {
        if( iNum <0)
        {
            iNum = - iNum;
        }
        int Product =1;
        int iDigit=0;

        while (iNum !=0)
        {
            iDigit = iNum % 10 ;

            if(iDigit==0)
            {
                iDigit=1;
            }

            Product = Product*iDigit;

            iNum= iNum / 10 ;
        }
        return Product;

    }


}

class java34_3
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the value  ");
        int iValue = sobj.nextInt();

        DigitsX obj = new DigitsX(iValue);
        
        int iRet = obj.Count_Of_Eeven_Digits();
        System.out.println("The MultiplicATIONS OF ALL DIGITS is : "+iRet);
        
        sobj.close();
    }
}

/*
Enter the value
1018
The MultiplicATIONS OF ALL DIGITS is : 8


Enter the value
2395
The MultiplicATIONS OF ALL DIGITS is : 270


Enter the value
9440
The MultiplicATIONS OF ALL DIGITS is : 144

 */
