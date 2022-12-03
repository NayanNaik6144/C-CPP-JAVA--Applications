/*
17.4) Accpet N numbers from user and Display all such numbers wich contain 3 digits number in that Array 
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



void  DisplayThreeDigit(int *ptr , int iLenght  )
{

    int iCnt = 0 ;
    int iCount = 0;

    printf("ALL three digit in the given elments are :\n ");

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(  99 <  *( ptr + iCnt) && *( ptr + iCnt) < 1000 )
        {
          printf("%d\t", *( ptr + iCnt)) ;
        }
    }
}

int main( )
{
    int *ptr = NULL ;
    int iLength = 0;
    register int iCnt = 0 ;
    
    
    printf("Enter the Lenght of Array :\n");
    scanf("%d", &iLength);

    printf("Enetr the elements in the array :\n" );

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory") ;

        return - 1 ;
    }

    for( iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("The elements of array are :\n");

    for(iCnt =0 ; iCnt <iLength ; iCnt++)
    {
        printf("%d\t", ptr[iCnt]) ;
    }

    
     DisplayThreeDigit( ptr , iLength );

    
    return 0 ;
}

/*
Enter the Lenght of Array :
6
Enetr the elements in the array :
8228
70
235
3
458
733
The elements of array are :
8228    70      235     3       458     733    
ALL three digit in the given elments are :
 235    458     733
*/