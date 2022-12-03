/*
pattern printng Solve in C 

just interest in What logic u Apply 
Accept number of rows and number of columns from user and display below pattern .

input :-
Rows = 4
cols = 5

output :-


 1  2  3  4  5
-1 -2 -3 -4 -5
 1  2  3  4  5
-1 -2 -3 -4 -5


*/

#include<stdio.h>

void  DisplayPattern( int iRow , int iCol )
{
    int i =0 ;
    int j=0 ;
    int iCntP = 0;
    int iCntN = 0;
     
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
        iCntP = 1 ;
        iCntN = -1 ;
        
        for (j =1 ; j <= iCol ; j++)
        {

            if( i%2 != 0 )
            {
                printf("%d\t", iCntP);
                iCntP++;
            }  
            else
            {
                printf("%d\t", iCntN);
                iCntN = iCntN - 1 ;
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

/*
C:\Users\Nayan\Desktop\Assignment 21>gcc Program21_4.c -o Program21_4exe

C:\Users\Nayan\Desktop\Assignment 21> Program21_4exe
Enter the Rows And Cols :
5
5
1       2       3       4       5


-1      -2      -3      -4      -5


1       2       3       4       5


-1      -2      -3      -4      -5


1       2       3       4       5

*/