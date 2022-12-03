/*
pattern printng Solve in C 

just interest in What logic u Apply 
Accept number of rows and number of columns from user and display below pattern .

input :-
Rows = 4
cols = 5

output :-

a b c d e
1 2 3 4 5
a b c d e
1 2 3 4 5


*/

#include<stdio.h>

void  DisplayPattern( int iRow , int iCol )
{
    int i =0 ;
    int j=0 ;
    int iCnt = 0;
     char cCnt ;
    
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
        iCnt = 1 ;
        cCnt = 'a';

        for (j =1 ; j <= iCol ; j++)
        {

            if( i%2 != 0 )
            {
                printf("%c\t", cCnt);
                cCnt++ ;
            }  
            else
            {
                printf("%d\t", iCnt);
                iCnt++ ;
            }
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
C:\Users\Nayan\Desktop\Assignment 21> Program21_3exe
Enter the Rows And Cols :
4
5
a       b       c       d       e


1       2       3       4       5


a       b       c       d       e


1       2       3       4       5

*/
