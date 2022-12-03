/*
Mirror Of L Shaped >
C:\Users\Nayan\Desktop\Pattern Printing>gcc p4.c -o p4exe

C:\Users\Nayan\Desktop\Pattern Printing> p4exe
Enter the iRows and iCols for pattern:
5
5
                                #


                                #


                                #


                                #


#       #       #       #       #


*/
#include<stdio.h>

void DisplayPattern(int  iRows , int iCols)
{
    int i = 0 ;
    int j = 0 ;

    if(iRows != iCols)
    {
        return ;
    }

    for(i=1 ; i<=iRows ; i++ )
    {
        for(j=1 ; j<=iCols ; j++)
        {
            if( i== iRows || j== iCols)
            {
                printf("#\t");
            }
            else
            {
                printf(" \t");
            }
        }

        printf("\n\n\n");
    }
}

int main ()
{
    int iRows=0;
    int iCols=0;

    printf("Enter the iRows and iCols for pattern:\n");
    scanf("%d\n%d",&iRows , &iCols);

    DisplayPattern( iRows , iCols);

    return 0 ;
}