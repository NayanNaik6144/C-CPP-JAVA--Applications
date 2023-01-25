import java.util.*;

class Pattern
{
    public void Display_Pattern(int iRow , int iCol)
    {
        char cCntC ;
        char cCntS ;
        if(iRow < 0)
        {
            iRow = - iRow ;
        }

        if(iCol < 0)
        {
            iCol = - iCol ;
        }

        for(int i=1 ; i<=iRow ; i++)
        {
            cCntC='A';
            cCntS='a';
            
            for(int j=1 ; j<=iCol ; j++)
            {
                if( i % 2 !=0)
                {
                    System.out.print(cCntC +"\t");
                    cCntC++;
                }
                else
                {
                    System.out.print(cCntS +"\t");
                    cCntS++;
                }

                
            }
            System.out.println();
            
        }

    }

}

class Java36_2
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
a       b       c       d
A       B       C       D
a       b       c       d

 */