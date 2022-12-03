/*
Accept number of rows and colum from user and display below pattern .
*/

#include<stdio.h>

void  DisplayPattern( int iRow , int iCol )
{
    int i =0 ;
    int j=0 ;
    char cCntA ;
    cCntA = 'A';
        

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
               
           printf("%c\t", cCntA);
           
        }
         
         cCntA++ ;

        
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
C:\Users\Nayan\Desktop\Assignment 20>gcc Program20_3.c -o Program20_3exe

C:\Users\Nayan\Desktop\Assignment 20> Program20_3exe
Enter the Rows And Cols :
4
5
A       A       A       A       A


B       B       B       B       B


C       C       C       C       C


D       D       D       D       D



*/