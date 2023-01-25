
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

        int iCnt=1;
        for(int i=1 ; i<=iRow ; i++)
        { 
            for(int j=1 ; j<=iCol ; j++)
            {
                System.out.print(iCnt +"\t");
                 iCnt++;
            }
                System.out.println();
               
            
        }

    }

}

class Java36_5
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
1       2       3       4       5
6       7       8       9       10
11      12      13      14      15
16      17      18      19      20

 */
