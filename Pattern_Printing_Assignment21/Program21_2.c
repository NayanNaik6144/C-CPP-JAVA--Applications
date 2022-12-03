/*
pattern printng Solve in C 

Accept number of rows and number of columns from user and display below pattern .

input :-
Rows = 5
cols = 5

output :-

2 4 6 8 10
1 3 5 7 9
2 4 6 8 10
1 3 5 7 9
2 4 6 8 10

*/

#include<stdio.h>

void  DisplayPattern( int iRow , int iCol )
{
    int i =0 ;
    int j=0 ;
    int iCntE = 0;
    int iCntO = 0;
    
    
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


            iCntE = 2;
            
            iCntO = 1;


        for (j =1 ; j <= iCol ; j++)
        {

            
            if( i % 2 != 0)
            {
                printf("%d\t",iCntE );
                iCntE = iCntE + 2 ;
            }
            else
            {
                printf("%d\t",iCntO );
                iCntO = iCntO + 2;
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
C:\Users\Nayan\Desktop\Assignment 21>gcc Program21_2.c -o Program21_2exe

C:\Users\Nayan\Desktop\Assignment 21> Program21_2exe
Enter the Rows And Cols :
5
5
2       4       6       8       10


1       3       5       7       9


2       4       6       8       10


1       3       5       7       9


2       4       6       8       10

*/
