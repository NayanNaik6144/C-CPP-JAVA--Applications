/*
17.3)
Accept  N Numbers from user and return the difference between largest and smallest number 
*/

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

int FindDiffBetweenLargestAndSmallest (int iRetLarge , int iRetSmall )
{

    int iDiff = 0;

    iDiff = iRetLarge - iRetSmall ;

    return iDiff ;

}



int main( )
{
    int *ptr = NULL ;
    int iLength = 0;
    register int iCnt = 0 ;
    int iRetLarge = 0;
    int iRetSmall=0 ;

    
    int iRetDiff = 0 ;

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

    iRetLarge = CheckLargestNo( ptr , iLength );
    printf("\nThe largest number from array is : %d\n", iRetLarge);


    iRetSmall = CheckSmallestNo( ptr , iLength );
    printf("The smallest  number from array is : %d\n", iRetSmall);

    iRetDiff = FindDiffBetweenLargestAndSmallest (iRetLarge , iRetSmall );

    printf("The Difference Between Largest %d  And Smallest %d  number from array is : %d\n", iRetLarge , iRetSmall , iRetDiff);

     
    return 0 ;
}

/*
Enter the Lenght of Array :
6
Enetr the elements in the array :
85
66
3
93
75
88
The elements of array are :
85      66      3       93      75      88
The largest number from array is : 93
The smallest  number from array is : 3
The Difference Between Largest 93  And Smallest 3  number from array is : 90

*/