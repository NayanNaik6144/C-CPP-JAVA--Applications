/*
Accept number of rows and colum from user and display below pattern .
*/

#include<stdio.h>

void  DisplayPattern( int iRow , int iCol )
{
    int i =0 ;
    int j=0 ;
    
        

    if(iRow < 0)
    {
        iRow = - iRow ;
    }

    if(iCol < 0)
    {
        iCol = - iCol ;
    }

    for( i= iRow ; i >0 ; i--)
    {
        

        for (j = 1 ; j <= iCol ; j++)
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
Enter the Rows And Cols :
4
5
4       4       4       4       4


3       3       3       3       3


2       2       2       2       2


1       1       1       1       1



*/