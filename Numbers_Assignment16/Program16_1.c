/*
16.1) Accept N numbers from user and aceept one another number as No check whether No is present of not. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool CheckThatNo(int *ptr , int iLenght , int iNo )
{

    int iCnt = 0 ;
    int iCount = 0;

    for(iCnt = 0 ; iCnt < iLenght ; iCnt++)
    {
        if(  iNo == *( ptr + iCnt))
        {
            iCount++ ;

            break;
        }
    }

   
    if(iCnt == iLenght )
    {
        return false ; 
    }
    else
    {
        return true ;
    }

}

int main( )
{
    int *ptr = NULL ;
    int iLength = 0;
    register int iCnt = 0 ;

    int iNo= 0;


    bool bRet = 0 ;

    printf("Enter the Lenght of Array :\n");
    scanf("%d", &iLength);

    printf("Enetr the elements in the array :\n" );

    ptr = (int *)malloc(iLength * sizeof(int));

    for( iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("The elements of array are :\n");

    for(iCnt =0 ; iCnt <iLength ; iCnt++)
    {
        printf("%d\t", ptr[iCnt]) ;
    }

    printf("Enter the number we check in that array :\n");
    scanf("%d",&iNo);


    bRet = CheckThatNo( ptr , iLength , iNo );
     
     if( bRet == false)
     {
        printf("The No %d is not present in that array :\n", iNo);
      }
     else
     {
        printf("The No %d is  present in that array :\n", iNo);
     }

    return 0 ;
}

/*
Enter the Lenght of Array :
6
Enetr the elements in the array :
66
85
3
66
93
88
The elements of array are :
66      85      3       66      93      88      Enter the number we check in that array :
66
The No 66 is  present in that array :
*/