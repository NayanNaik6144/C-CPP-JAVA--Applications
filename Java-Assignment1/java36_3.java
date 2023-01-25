import java.util.*;

class Pattern
{
    public void Display_Pattern(int iRow , int iCol)
    {
        char cCntC ;
       
        if(iRow < 0)
        {
            iRow = - iRow ;
        }

        if(iCol < 0)
        {
            iCol = - iCol ;
        }

        cCntC='A';
        for(int i=1 ; i<=iRow ; i++)
        { 
            for(int j=1 ; j<=iCol ; j++)
            {
                System.out.print(cCntC +"\t");
             
            }
                System.out.println();
                cCntC++;
            
        }

    }

}

class Java36_3
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
A       A       A       A
B       B       B       B
C       C       C       C
D       D       D       D

 */