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
            
            for(int j=1 ; j<=iCol ; j++)
            {
                if( j==iRow - i + 1)
                {
                    System.out.print("#\t");  
                }
                else if(  j < iCol - i + 1)
                {
                    System.out.print("*\t");
    
                }
                else 
                {
                    System.out.print("@\t");
    
                }
            }
            System.out.println();
            
        }

    }

}

class Java40_2
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
*       *       *       #
*       *       #       @
*       #       @       @
#       @       @       @

 */