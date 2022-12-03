/*
Accept number of rows and colum from user and display below pattern .
*/

#include<stdio.h>

void  DisplayPattern( int iRow , int iCol )
{
    int i =0 ;
    int j=0 ;
    char cCntA ;
    char cCnta ;
    

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
        cCntA = 'A';
        cCnta = 'a';

        for (j = 1 ; j <= iCol ; j++)
        {
                if( i % 2 == 0 )
                {
                    printf("%c\t", cCntA);
                    cCntA++;
                }
                else
                {
                    printf("%c\t", cCnta);
                    cCnta++ ;
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
C:\Users\Nayan\Desktop\Assignment 20> Program20_2exe
Enter the Rows And Cols :
5
5
a       b       c       d       e


A       B       C       D       E


a       b       c       d       e


A       B       C       D       E


a       b       c       d       e




*/