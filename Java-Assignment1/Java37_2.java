import java.util.*;

class Pattern
{
    public void Display_Pattern(int iRow , int iCol)
    {
        
        for(int i=0 ; i<iRow ; i++)
        {
            int iCnt=0;
            for(int j=0 ; j<iCol ; j++)
            {
                System.out.print(++iCnt +"\t");
            }
            System.out.println();
        }

    }

}

class Java37_2
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
3
1       2       3
1       2       3
1       2       3
1       2       3
 */