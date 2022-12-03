/*
Accept number of rows and colum from user and display below pattern .
*/

#include<stdio.h>

void  DisplayPattern( int iRow , int iCol )
{
    int i =0 ;
    int j=0 ;
    int iCnt = 0 ;
        iCnt = 1 ;

    if(iRow < 0)
    {
        iRow = - iRow ;
    }

    if(iCol < 0)
    {
        iCol = - iCol ;
    }

    for( i= 1 ; i<= iRow ; i++)
    {
        

        for (j = 1 ; j <= iCol ; j++)
        {
               
           printf("%d\t", iCnt);

           iCnt++;
           
        }
         
      
        printf("\n\n\n");
    }

}

int main()
{
    // Square have  same rows and colums thats is N

    int iRow=0;
    int iCol=0 ;

    printf("Enter the Rows And Cols :\n");
    scanf("%d%d", &iRow , &iCol);

    
    DisplayPattern(iRow , iCol);

    return 0 ;
}


/*
C:\Users\Nayan\Desktop\Assignment 20>gcc Program20_5.c -o Program20_5exe

C:\Users\Nayan\Desktop\Assignment 20> Program20_5exe
Enter the Rows And Cols :
4
5
1       2       3       4       5


6       7       8       9       10


11      12      13      14      15


16      17      18      19      20


*/