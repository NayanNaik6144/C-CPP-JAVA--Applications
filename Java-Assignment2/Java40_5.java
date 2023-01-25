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
        
        for(int i=1 ; i<=iRow ; i++)
        {
            int iCnt=1;
            for(int j=1 ; j<=iCol ; j++)
            {
                if(  (j== iCol) || (i==1 ) || (j==1) ||  (j==i) || (iRow == i))
                {
                    System.out.print(iCnt +"\t");  
                }
                else
                {
                    System.out.print(" \t");
                }
                iCnt++;
               
            
            }
            System.out.println("\n");

        }

    }
}

class Java40_5
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
5
Enter The Col
5
1       2       3       4       5

1       2                       5

1               3               5

1                       4       5

1       2       3       4       5
 */