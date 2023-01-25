
import java.util.*;

class Pattern
{
    public void Display_Pattern(int iRow , int iCol)
    {
        if(iRow < 0)
        {
            iRow = - iRow ;
        }

        if(iCol < 0)
        {
            iCol = - iCol ;
        }

        int iCnt=4;
        for(int i=1 ; i<=iRow ; i++)
        { 
            for(int j=1 ; j<=iCol ; j++)
            {
                System.out.print(iCnt +"\t");
             
            }
                System.out.println();
                iCnt--;
            
        }

    }

}

class Java36_4
{
    public static void main(String args[]) 
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter The Row ");
        int iRow = sobj.nextInt();

        System.out.println("Enter The Col ");
        int iCol = sobj.nextInt();

        Pattern  obj = new Pattern();

        obj.Display_Pattern(iRow , iCol);

        sobj.close();
        
     }
}

/*
Enter The Row
4
Enter The Col
5
4       4       4       4       4
3       3       3       3       3
2       2       2       2       2
1       1       1       1       1

 */