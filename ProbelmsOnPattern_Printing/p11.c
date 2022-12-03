
/*

C:\Users\Nayan\Desktop\Pattern Printing> p11exe
Enter the iRows and iCols for pattern:
5
5
#       #       #       #       #


#       #                       #


#               #               #


#                       #       #


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
            if(i==1 || j==1 || i== iRows || j== iCols  || i==j)
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