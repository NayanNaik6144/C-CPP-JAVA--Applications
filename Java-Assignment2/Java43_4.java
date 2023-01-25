import java.util.*;

class DigitsX
{
    public float fNum;

    public DigitsX(float A)
    {
        fNum = A;
    }

    public void Percetage()
    {
        if( fNum <0.0)
        {
            fNum = - fNum;
        }
        
        if( fNum < 35)
        {
            System.out.println("Fail");
        }
        else if(fNum <50)
        {
            System.out.println("Pass Class");
        }
        else if(fNum <60)
        {
            System.out.println("Second Class");
        }
        else if(fNum <70)
        {
            System.out.println("First Class");
        }
        else if(fNum >=70)
        {
            System.out.println("First Class With Distinction");
        }



    }


}

class Java43_4
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Marks  ");
        float fValue = sobj.nextFloat();

        DigitsX obj = new DigitsX(fValue);
        
        obj.Percetage();
        
        
        sobj.close();
    }
}

/*
 Enter the Marks
67.3
First Class

C:\Users\Nayan\Desktop\PP\Java>java Java43_4
Enter the Marks
45.8
Pass Class

C:\Users\Nayan\Desktop\PP\Java>java Java43_4
Enter the Marks
88.9
First Class With Distinction
 */