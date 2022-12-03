/*
17.5) Accept n number from user and display Summation of  digits of each number 
*/
#include<stdio.h>
#include<stdlib.h>


void  FindSum( int iNum )
{
    int iDigit = 0 ;
    int iSum = 0 ;
    int iTemp = 0 ;
    iTemp = iNum ;

    while  ( iNum != 0 )
        {

            iDigit =  iNum % 10 ;

            iSum = iSum + iDigit ;

            iNum = iNum / 10 ;
        }

        printf("The summations of digit of %d is %d \n", iTemp , iSum ); 

}



void DisplaySummationsOfDigit(int *ptr , int iLenght  )
{

    int iCnt = 0 ;
    int iDigit = 0 ;
    int iSum = 0 ;

    printf("The summations of Digits of number is :\n");

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        iSum = 0 ;

        FindSum( *(ptr + iCnt)) ;

    }

    
}

int main( )
{
    int *ptr = NULL;
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

    
     DisplaySummationsOfDigit( ptr , iLength );

    
    return 0 ;
}

/*

Enter the Lenght of Array :
6
Enetr the elements in the array :
8225
665
3
76
953
858
The elements of array are :

8225    665     3       76      953     858     

The summations of Digits of number is :
The summations of digit of 8225 is 17
The summations of digit of 665 is 17
The summations of digit of 3 is 3
The summations of digit of 76 is 13
The summations of digit of 953 is 17
The summations of digit of 858 is 21

*/