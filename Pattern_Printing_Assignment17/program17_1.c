/*
17.1) Accept n number from user and return the largest number .
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



int CheckLargestNo(int *ptr , int iLenght  )
{

    int iCnt = 0 ;
    int iCount = 0;
    int iMax= 0 ;
    iMax =  *ptr ;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(  iMax < *( ptr + iCnt))
        {
           iMax = *( ptr + iCnt) ;
        }
    }

   
    return iMax ;

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

    

    iRet = CheckLargestNo( ptr , iLength );

    printf("The largest number from array is : %d", iRet);

     
     

    return 0 ;
}

/*
Enter the Lenght of Array :
6
Enetr the elements in the array :
85
66
3
66
93
88
The elements of array are :
85      66      3       66      93      88      The largest number from array is : 93
*/