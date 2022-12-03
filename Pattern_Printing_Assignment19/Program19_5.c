/*
Accept number rows and colum  from user and display below pattern.
Enter the Rows And Cols :
3
4
1       1       1       1


2       2       2       2


3       3       3       3

*/
#include<stdio.h>

void  DisplayPattern( int iRow , int iCol )
{
    int i =0 ;
    int j=0 ;
    int iCnt = 0;

    
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

        for (j =1 ; j <= iCol ; j++)
        {
                printf("%d\t", i);  
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
C:\Users\Nayan\Desktop\Assignment 19>gcc Program19_5.c -o Program19_5exe

C:\Users\Nayan\Desktop\Assignment 19> Program19_5exe
Enter the Rows And Cols :
3
4
1       1       1       1


2       2       2       2


3       3       3       3

*/