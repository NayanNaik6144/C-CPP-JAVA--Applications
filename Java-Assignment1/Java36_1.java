import java.util.*;

class Pattern
{
    public void Display_Pattern(int iRow , int iCol)
    {
        char cCnt ;
        if(iRow < 0)
        {
            iRow = - iRow ;
        }

        if(iCol < 0)
        {
            iCol = - iCol ;
        }

        for(int i=0 ; i<iRow ; i++)
        {
            cCnt='A';
            for(int j=0 ; j<iCol ; j++)
            {
                System.out.print(cCnt +"\t");
                cCnt++;
            }
            System.out.println();
            
        }

    }

}

class Java36_1
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
4
A       B       C       D
A       B       C       D
A       B       C       D
A       B       C       D
 */