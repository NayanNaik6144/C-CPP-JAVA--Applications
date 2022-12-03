/*
Accept number of rows and number of columns from user and display below pattern 

iRows = 4
iCols = 4

* # # # 
* * # #
* * * #
* * * *
*/

#include<stdio.h>

void  DisplayPattern( int iRow , int iCol )
{
    int i =0 ;
    int j=0 ;
    int iCnt = 0;
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

        for (j = 1 ; j<= iCol ; j++)
        {
                if(i >= j)
                {
                    printf("*\t");
                }
                else
                {
                    printf("#\t");
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