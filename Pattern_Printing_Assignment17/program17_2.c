/*
17.2) Accept n number from user and return the Smallest  number .
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



int CheckSmallestNo(int *ptr , int iLenght  )
{

    int iCnt = 0 ;
    int iCount = 0;
    int iMin= 0 ;
    iMin =  *ptr ;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(  iMin >  *( ptr + iCnt))
        {
           iMin = *( ptr + iCnt) ;
        }
    }

   
    return iMin ;

}

int main( )
{
    int *ptr = NULL ;
    int iLength = 0;
    register int iCnt = 0 ;
    
    int iRet = 0 ;

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

    
    iRet = CheckSmallestNo( ptr , iLength );

    printf("The smallest  number from array is : %d", iRet);

    return 0 ;
}

/*
Enter the Lenght of Array :
6
Enetr the elements in the array :
88
66
3
73
93
85
The elements of array are :
88      66      3       73      93      85      The smallest  number from array is : 3
*/